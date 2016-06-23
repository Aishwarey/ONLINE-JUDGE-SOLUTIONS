    #include<iostream>
    #include<cstring>
    using namespace std;

    int main()
    {
        string arr[10000];
        int cases,ct,test,cnt,cont,ou,inde;
        cin>>cases;
        while(cases>0)
        {
        cin>>test;
        for(int i=0;i<test;i++)
        {
            cin>>arr[i];
        }
        cnt=test;
        int i=0,lk;
        while(cnt>0)
        {
            string az=arr[i];
            inde=i;
            int siz=az.length();
            //cout<<siz<<endl;
            for(int r =0; r<test;r++)
            {   ct=0;
                cont=0;
                ou=0;
                string z=arr[r];

            //   cout<<z<<endl<<az<<endl;
                for(lk=0;lk<siz;lk++)
                {
                    if(az[lk]==z[lk])
                    {
                        cont=cont+1;
          //              cout<<az[lk]<<"=="<<z[lk]<<endl;
                        //cout<<cont<<endl<<siz<<endl;
                    }

                }

                if(cont==siz && inde!=r)
                {
                    ct=1;
        //            cout<<"if siz"<<endl;
                    break;
                }
    //cout<<"while"<<endl;
            }
            cnt--;
            //cout<<"outer while";
            if(ct==1)
            {
                cout<<"NO"<<endl;
                break;
            }
            else if(ct==0 && cnt==0)
            {
                cout<<"YES"<<endl;
                break;
            }

            i++;

        }
        cases--;
        }
    }

