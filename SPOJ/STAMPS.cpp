/*
SPOJ submission 17204349 (C++ 4.3.2) plaintext list. Status: AC, problem STAMPS, contest SPOJ. By z1us (z1us), 2016-06-30 20:30:05.
*/
#include<iostream>
using namespace std;
int bubble_sort (int arr[], int n,long stamp)
 {	long sumf=0;
 int count=0;
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n - i - 1; ++j)
      if (arr[j] > arr[j + 1])
     {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
 
      for(int i=n-1;i>=0;i--)
      {
		sumf+=arr[i];
		if(sumf>=stamp)
		{
			//cout<<"sumf="<<sumf<<endl;
			return n-i;
		}
      }
      return 0;
  }
 int situ(int ar[],int n)
 {
 
 }
 
int main()
{
	int tc,frnd,arr[1000],sum;
	long stamps;
	int no=1;;
	cin>>tc;
	while(tc)
	{
		cin>>stamps;
		cin>>frnd;
		for(int i=0;i<frnd;i++)
		{
			cin>>arr[i];
		}
		sum=bubble_sort(arr,frnd,stamps);
		if(sum>=1)
		{
			cout<<"Scenario #"<<no<<":"<<endl<<sum<<endl;
		}
		else
			cout<<"Scenario #"<<no<<":"<<endl<<"impossible"<<endl;
		tc--;
		no++;
	}
	cout<<endl;
	return 0;
}
 
