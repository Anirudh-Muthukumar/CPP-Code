#include<iostream>
using namespace std;

int main()
{
    int t,n,i,ct0,ct,flag,z;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        ct0=ct=0;
        int k =0;
        for(i=0;i<n;++i)
        {
            cin>>z;
            if(z==0)
                ct0++;
            else
                a[k++]=z;
        }
        flag = 1;
        while(flag)
        {
            flag = 0;
            for(i=0;i<k;++i)
            {
             //cout<<a[i]<<" ";
             if(a[i]==a[i+1])
             {
                 a[i]*=2;
                 a[i+1]=0;
                  ct++;
             }
            }

            for(i=0;i<k;++i)
                if(a[i]==a[i+1])
                

        }
        //cout<<endl;
        for(i=0;i<k;++i)
            if(a[i]!=0)
                cout<<a[i]<<" ";
        for(i=0;i<=ct0+ct;++i)
            cout<<"0 ";
        cout<<endl;
    }
    return 0;
}