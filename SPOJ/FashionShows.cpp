/*
SPOJ submission 17130637 (C++ 5) plaintext list. Status: AC, problem FASHION, contest SPOJ. By z1us (z1us), 2016-06-17 22:14:01.
*/
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX 1001
int main()
{
    int t,N,hot;
    int male[MAX],female[MAX];
    cin>>t;
    while(t--)
    {
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>male[i];            
        }
        for(int i=0;i<N;i++)
        {
            cin>>female[i];
        }
        sort(male, male + N);
         sort(female, female + N);
        hot=0;
        for(int i=0;i<N;i++)
        {
            hot=hot+male[i]*female[i];
        }
        cout<<hot<<endl;
    }
    return 0;
}
