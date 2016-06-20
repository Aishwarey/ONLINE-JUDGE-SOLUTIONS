/*
SPOJ submission 17143128 (C++ 4.3.2) plaintext list. Status: AC, problem WILLITST, contest SPOJ. By z1us (z1us), 2016-06-20 09:52:32.
*/
#include<iostream>
using namespace std;
int main()
{
    int nie=0;
    long long unsigned n;
    cin>>n;
 
    while(n>1)
    {
        if(n%2==0)                            //1,2,4,8,
            n=n/2;
        else
            n=n*3+3;
        if(n==3 || n==12 || n==6)
        {
            nie=1;
            break;
        }
 
    }
 
    if(nie==1)
        cout<<"NIE";
    else
        cout<<"TAK";
    return 0;
}
