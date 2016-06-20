/*
SPOJ submission 17143556 (C++ 4.3.2) plaintext list. Status: AC, problem FCTRL, contest SPOJ. By z1us (z1us), 2016-06-20 11:19:21.
*/
#include<iostream>
using namespace std;
int main()
{
    long long unsigned N,sum;
    int T;
    cin>>T;
    while(T--)
    {   //int a=5;
        sum=0;
        cin>>N;
        while(N>=5)
        {
            sum+= N/5;
            N=N/5;
           // cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}
