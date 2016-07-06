/*
SPOJ submission 17237197 (C++ 4.3.2) plaintext list. Status: AC, problem CRDS, contest SPOJ. By z1us (z1us), 2016-07-06 22:34:12.
*/
#include<iostream>
using namespace std;
int main()
{
	long long unsigned n;
	long unsigned i,N;
	int t;
	cin>>t;
	while(t)
	{
 
		cin>>N;
		n=N*2;
		for(i=N-1;i>0;i--)
		{
			n+=i*3;
			//cout<<"el";
		}
	cout<<n%1000007<<endl;
	t--;
	}
 
return 0;
}
