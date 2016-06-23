/*
SPOJ submission 17166520 (C++ 4.3.2) plaintext list. Status: AC, problem PHONELST, contest SPOJ. By z1us (z1us), 2016-06-23 22:50:57.
*/
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
    {
      int flag=0;
      int n;
      cin>>n;
      vector<string> vec;
      map<long long,int> mapi;
      for(int i=0;i<n;i++)
        {
          string x;
          cin>>x;
          vec.push_back(x);
        }
      sort(vec.begin(),vec.end());
      string prev="asdasd";
      for(int i=0;i<vec.size()&&flag==0;i++)
        {
          int len=prev.length();
          string cpy=vec.at(i).substr(0,len);
          if(cpy==prev)
            {
              cout<<"NO"<<endl;
              flag=1;
              break;
            }
          prev=vec.at(i);
 
        }
      if(flag==0)
        {
          cout<<"YES"<<endl;
        }
    }
    
   return 0;
} 
