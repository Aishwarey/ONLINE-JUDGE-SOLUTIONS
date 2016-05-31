/*
  id:10243571
  SNACKDOWN-ONLINE-QUALIFIER-2016 problem 3 (" K-good_Words")
*/

#include <cmath>
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<vector>
#include<algorithm>
#include<set>
#include<limits.h>
#define NUM 100001
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[NUM];
        int a[26],i,len,ans=0,val,k,sum,count,j,temp;
        scanf("%s",s);
        scanf("%d",&k);
        len=strlen(s);
        for(i=0;i<26;i++)
        {
            a[i]=0;
        }
        for(i=0;i<len;i++)
        {
            a[s[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            for(j=0;j<25;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        ans=INT_MAX;
        if(k>=a[25]-a[0])
        {
            ans=0;
        }
        else
        {
            for(i=0;i<26;i++)
            {
                // from i to i+k
                val=0;
                j=0;
                while(j>=0 && j<26 && j<i)
                {
                    val+=a[j];
                    j++;
                }
                temp=a[i]+k;
                while(j>=0 && j<26 && a[j]-a[i]<=k)
                {
                    j++;
                }
                while(j>=0 && j<26)
                {
                    val+=a[j]-temp;
                    j++;
                }
                if(val<ans)
                {
                    ans=val;
                }
                //printf("%d ",val);
            }
        }
        printf("%d\n",ans);
    }
}
