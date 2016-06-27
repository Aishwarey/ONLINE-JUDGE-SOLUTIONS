/*
SPOJ submission 17185512 (C++ 4.3.2) plaintext list. Status: AC, problem ARITH2, contest SPOJ. By z1us (z1us), 2016-06-27 12:31:37.
*/
#include<iostream>
using namespace std;
int main()
{
    int tc,b;
    long long unsigned sum,a;
    char ch;
    cin>>tc;
    for(int z=0;z<tc;z++)
    {
        cin>>a;
        cin>>ch;
        sum=0;
        while(ch!='=')
        {   cin>>b;
            //cout<<"switch start"<<endl;
            switch(ch)
            {
                case'+':
                    sum=a+b;
                    //cout<<"+"<<sum<<endl;
                    break;
                case'*':
                    sum=a*b;
                   // cout<<"*"<<sum<<endl;
                    break;
                case'-':
                    sum=a-b;
                   // cout<<"-"<<sum<<endl;
                    break;
                case'/':
                    sum=a/b;
                   // cout<<"/"<<sum<<endl;
                    break;
                case'%':
                    sum=a%b;
                    //cout<<"%"<<sum<<endl;
                    break;
                default:
                    break;
            }
            //cout<<"switch end "<<endl;
            cin>>ch;
            a=sum;
        }
        cout<<sum<<endl;
        cout<<endl;
    }
 
return 0;
}
