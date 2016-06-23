/*
SPOJ submission 17162604 (C++ 4.3.2) plaintext list. Status: AC, problem ANARC09A, contest SPOJ. By z1us (z1us), 2016-06-23 10:49:57.
*/
#include<iostream>
//#include<cstdio>
using namespace std;
int main()
{   //char a='}',b='{';
int j=123,cnt=0,no=1,top;
    //printf("%d",a);
    //cout<<endl;
    string s;
    cin>>s;
    while(s[0]!='-')
    {cnt=0,top=0;
    for(int i=0; s[i]!='\0';i++)
    {
        int lo;
        lo=s[i];
        if(lo==123)
            {
               top=top+1;
               //cout<<"top"<<top<<endl;
            }
 
        else if (lo==125 && top==0)
        {
            cnt =cnt+1;
            top=top+1;
            //cout<<"cnt"<<cnt<<endl;
        }
        else
            top=top-1;
 
    }
    cout<<no<<". "<<(top/2)+cnt<<endl;
    no=no+1;
    cin>>s;
    }
    return 0;
}
