/*
SPOJ submission 17166738 (C++ 4.3.2) plaintext list. Status: AC, problem SAMER08F, contest SPOJ. By z1us (z1us), 2016-06-24 00:29:58.
*/
#include<iostream>
using namespace std;
int main()
{
    int N;
    long unsigned sum ,a,b,c;
    cin>>N;
    while(N!=0)
    {
        sum=0;
        a=N;
        b=N+1;
        c=(2*N)+1;
 
        sum=(a*b*c)/6;
        cout<<sum<<endl;
        cin>>N;
    }
    return 0;
}
