/*
SPOJ submission 17166688 (C++ 4.3.2) plaintext list. Status: AC, problem AE00, contest SPOJ. By z1us (z1us), 2016-06-23 23:57:48.
*/
#include<iostream>
using namespace std;
int main()
{
    int N,i,j,add=0;
 
    cin>>N;
    if(N==1)
        {cout<<1;return 0;}
    for(i=1;i<=N/2+1;i++)
    {
        for(j=i;j<=N;j++)
        {
            if(i*j<=N)
            {
                add=add+1;
            }
            else
                break;
        }
    }
    cout<<add;
 
    return 0;
}
