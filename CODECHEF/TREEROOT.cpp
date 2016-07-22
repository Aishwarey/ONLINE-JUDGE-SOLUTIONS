/*CodeChef submission 10872449 (C++ 4.9.2) plaintext list. Status: AC, problem TREEROOT, contest CODECHEF. By z1us (z1us), 2016-07-22 23:14:30.
*/
#include<iostream>
using namespace std;
int main()
{
    int totals,totaln,T,N,n,S;
    cin>>T;
    while(T--)
    {   totals=0;
        totaln=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>N;
            totaln +=N;
            cin>>S;
            totals +=S;
 
        }
        cout<<totaln-totals<<endl;
    }
return 0;
}
