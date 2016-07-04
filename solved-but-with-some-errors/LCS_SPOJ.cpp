#include<iostream>
using namespace std;
int lcs(string a1,string a2,long s1,long s2)
{
    int LCS[s1+1][s2+1];
    int m,n;

    for(m=0;m<=s1;m++)
    {
        for(n=0;n<=s2;n++)

        {
            if(m==0 || n==0)
            {
                LCS[m][n]=0;
            }
            else if(a1[m-1]==a2[n-1])
            {
                    LCS[m][n]=LCS[m-1][n-1]+1;
                    //cout<<endl<<"a1[m]="<<a1[m]<<"   a2[n]="<<a2[n]<<endl;
            }
            else
                LCS[m][n]=max(LCS[m-1][n],LCS[m][n-1]);
        }
    }

   // cout<<LCS[s1][s2]<<endl;
    return LCS[s1][s2];


}
int max(int a, int b)
{
    return (a > b)? a : b;
}


int main()
{
    string a1,a2;
    cin>>a1;
    cin>>a2;
    long s1= a1.length();
    long s2= a2.length();
    cout<<lcs(a1,a2,s1,s2);
    return 0;
}
/* its a perfect algo with all the desired output but its showing SIGSEGV(RUNTIME ERROR)
in spoj. it is the algo used to find the LCS even given in the dynamic programming tutorials.
i looked for the solutions on google but it was showing some solutions with some complicated 
methods used to solve the same problem*/
