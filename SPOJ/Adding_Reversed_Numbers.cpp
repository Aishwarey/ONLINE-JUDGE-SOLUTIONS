                  /*ADDREV - Adding Reversed Numbers
                          #simple-math #ad-hoc-1*/
#include <iostream>
using namespace std;
int rvse(long n)
{   long reverse=0;
int remainder;
    while(n != 0) {
        int remainder = n%10;
        reverse = reverse*10 + remainder;
        n/=10;
    }
    return reverse;
}
int main() {
    int n,i, reverse = 0;
    long no1,no2,rev;
    cin >> n;
    for(i=0;i<n;i++)
    {   cin>>no1;
        no1=rvse(no1);
        cin>>no2;
        no2=rvse(no2);
        rev=no1+no2;
        cout<<rvse(rev);
        cout<<endl;
    }
 
    return 0;
}
 
