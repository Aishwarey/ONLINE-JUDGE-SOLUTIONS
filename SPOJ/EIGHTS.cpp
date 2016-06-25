/*
SPOJ submission 17175144 (C++ 4.3.2) plaintext list. Status: AC, problem EIGHTS, contest SPOJ. By z1us (z1us), 2016-06-25 12:55:03.
*/
#include<iostream>
using namespace std;
int main()
{
    long long unsigned n,no,next;
    cin>>n;
    while(n>0)
    {
    cin>>next;
 
    no=(next-1)*250+192;
    cout<<no<<endl;
    n--;
    }
    return 0;
}
