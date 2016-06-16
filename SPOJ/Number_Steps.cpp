/*
SPOJ submission 17120843 (C++ 5) plaintext list. Status: AC, problem NSTEPS, contest SPOJ. By z1us (z1us), 2016-06-16 12:27:57.
*/
#include<iostream>
using namespace std;
int main()
{
    int N,x,y,no,i;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>x>>y;
        if(x!=y && x-y!=2)
            cout<<"No Number"<<endl;
        else if((x%2==0) && (y%2==0))
            cout<<x+y<<endl;
        else if((x%2!=0) && (y%2!=0))
            cout<<x+y-1<<endl;
 
    }
    return 0;
}
