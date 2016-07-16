/*
SPOJ submission 17297895 (C++ 4.3.2) plaintext list. Status: AC, problem ARMY, contest SPOJ. By z1us (z1us), 2016-07-16 20:56:24.
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int go,mago,add1,add2,no;
	scanf("%d",&no);
 
	while(no)
	{	scanf("%d %d",&go,&mago);
		int n[go],m[mago];
		for(int i=0;i<go;i++)
		{
			scanf("%d",&n[i]);
		}
		for(int i=0;i<mago;i++)
		{
			scanf("%d",&m[i]);
		}
		sort(n,n+go);
		sort(m,m+mago);
 
		if(n[go-1]>=m[mago-1])
			printf("Godzilla\n");
		else
			printf("MechaGodzilla\n");
		--no;
	}
	return 0;
}
