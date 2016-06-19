/*
SPOJ submission 17138784 (C++ 4.3.2) plaintext list. Status: WA, problem FIBFUNCH, contest SPOJ. By z1us (z1us), 2016-06-19 12:52:40.
*/
#include<iostream>
using namespace std;
int main()
{
    long unsigned a,b,n,M;
    long long unsigned sum,total;
    int tcase;
    cin>>tcase;
    for(int i=0; i<tcase;i++)
    {
        cin>>a>>b>>n>>M;
        sum=0;
        total=0;
        int a1=a,b1=b;
        for(int j=0;j<n-2;j++)
        {
            sum = a+b;
 
            a=b;
            b=sum;
            total +=sum;
        }
        cout<<(total+a1+b1)%M   <<endl;
    }
    return 0;
}
