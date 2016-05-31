#include<iostream>
using namespace std;
int main()
{
    int cses,time,stu,no,i,j,k;
    long long unsigned arr[10000],arr2[10000];
    cin>>cses;
    for(j=0;j<cses;j++)
    { no=0;
    int count=0;
        cin>>stu;
        for(i=0;i<stu;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<stu;i++)
        {
            cin>>arr2[i];
        }
        for(i=0;i<stu;i++)
        {
            time=arr[i]-no;
            k=time-arr2[i];
            if(k>=0)
            {
                count=count+1;
            }
            no=arr[i];
        }
        cout<<count;
 
       cout<<endl;
        }
return 0;
} 
