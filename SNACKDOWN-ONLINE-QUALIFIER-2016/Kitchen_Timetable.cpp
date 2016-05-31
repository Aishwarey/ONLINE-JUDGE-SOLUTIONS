/*
 * 1.cpp
 *
 *  Created on: 27-May-2016
 *      Author: ashish
 * COPIED FOR THE SOLUTION UNDERSTANDING
 */
#include<cstdio>
#define gc getchar_unlocked

void scanint(long int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main(){
	int t,n,ans;
	scanf("%d",&t);
	while(t){
		scanf("%d",&n);
		ans=0;
		long int a[n],b;
		for(int i=0;i<n;i++){
			scanint(a[i]);
		}
		    scanint(b);
			if(a[0]>=b)
				ans=1;
			for(int i=1;i<n;i++){
				scanint(b);
				if(a[i]-a[i-1]>=b)
					ans++;
			}
		printf("\n%d",ans);
		--t;
	}
	return 0;
}
