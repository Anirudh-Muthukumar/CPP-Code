#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int t,n,m,rem,neg_rem;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        rem = abs(n)%abs(m);
        neg_rem = abs(m)-rem;
        //cout<<rem<<" "<<neg_rem<<endl;
        if(n>0)
        {
            if(rem<neg_rem)
                cout<<n-rem<<endl;
            else
                cout<<n+neg_rem<<endl;
        }
        else
        {
            if(rem<neg_rem)
                cout<<(n+rem)<<endl;
            else
                cout<<(n-neg_rem)<<endl;
        }
    }
    return 0;
}