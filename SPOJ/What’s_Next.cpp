/*
SPOJ submission 17120632 (C++ 5) plaintext list. Status: AC, problem ACPC10A, contest SPOJ. By z1us (z1us), 2016-06-16 11:56:10.
*/
#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
    long a , b ,c ,cr;
    cin>>a>>b>>c;
    int z=a+c;
    long long x=a*c;
    while(a||b||c)
    {
    if(b-a==c-b)
        {
            cout<<"AP "<<a+3*(b-a)<<endl;
        }
    else
        {
            cr=b/a;
            cout<<"GP "<<a*pow(cr,3)<<endl;
        }
    cin>>a>>b>>c;
    }
    return 0;
}
 
