#include<iostream>
using namespace std;
int main()
{
    int steps=0,cot,cnt=0,i=1,ne,act=1;
    long nw;
    long no;

    cin>>no;
   while(no>9)
   {
       nw=0;

    while(no>0)
    {
        ne=no%10;
        nw+=ne*ne;
        no= no/10;
    }
     steps=steps+1;
    no=nw;

   }
   if(no==1)
    {
      cout<<steps;
      return 0;
    }
    else
    {
        cout<<-1;
        return 0;
    }
cout<<steps;
return 0;


}
