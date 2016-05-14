#include<iostream>
using namespace std;
int main()
{
    int A[1000000],i,j,N,m;
    long long cou=0;
    cin>>N;
    for(m=0;m<N;m++)
    {
        cin>>A[m];
    }
for(j=0;j<N-1;j++)
    {
 
        for(i=j+1;i<N;i++)
        {
            if(A[j]==A[i] && j<i)
                { cou=cou+1;}
        }
 
    }
    cout<<cou;
    return 0;
}
//second last test condition is exceding time limit
