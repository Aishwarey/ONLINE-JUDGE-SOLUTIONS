/*
SPOJ submission 17205225 (C++ 4.3.2) plaintext list. Status: AC, problem LASTDIG2, contest SPOJ. By z1us (z1us), 2016-07-01 00:49:25.
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int zad[][4] ={{0, 0, 0, 0}, {1, 1, 1, 1},{2, 4, 8, 6}, {3, 9, 7, 1},{4, 6, 4, 6}, {5, 5, 5, 5},
		{6, 6, 6, 6}, {7, 9, 3, 1},
		{8, 4, 2, 6}, {9, 1, 9, 1}};
    int tc;
    string a;
    long long b;
    cin>>tc;
    while(tc)
    {
        cin>>a;
        cin>>b;
        if(b==0)
            cout<<1<<endl;
        else
        {
        int A=a.length()-1  ;
        A=a[A]-'0';
 
        b=b%4;
        if(b==0)
        	cout<<zad[A][3]<<endl;
        else
        	cout<<zad[A][b-1]<<endl;
 
        }
        tc--;
    }
    return 0;
 
}
