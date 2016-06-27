/*
SPOJ submission 17188628 (C++ 4.3.2) plaintext list. Status: AC, problem PERMUT2, contest SPOJ. By z1us (z1us), 2016-06-27 23:04:43.
*/
#include<iostream>
using namespace std;
int main()
{
	int arr[100001],i,no,n;
	cin>>n;
	while(n!=0)
	{
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
 
	for(no=1;no<=n;no++)
	{
		//cout<<arr[arr[no]]<<endl;
		if(arr[arr[no]]!=no)
		{	cout<<"not ambiguous"<<endl;break;}
		if(no==n)
		{cout<<"ambiguous"<<endl;}
	}
    //cout<<endl;
	cin>>n;
	}
	return 0;
}
