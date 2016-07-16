/*
SPOJ submission 17298014 (C++ 4.3.2) plaintext list. Status: AC, problem HANGOVER, contest SPOJ. By z1us (z1us), 2016-07-16 21:14:15.
*/
#include<iostream>
using namespace std;
int main()
{
	float no,comp;
	cin>>no;
	while(no!= 0.00)
	{	int n=2.0;
		comp=0.00;
		int count=0;
 
		while(comp<=no)
		{
			comp += 1.0/n;
			n=n+1.0;
			count++;
			//cout<<count;
		}
		cout<<count<<" card(s)"<<endl;
		cin>>no;
	}
	return 0;
}
