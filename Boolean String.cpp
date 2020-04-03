#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main()
{
    int i,t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int a = atoi(s[0]);
        cout<<a;
        for(i=0;i<s.length();++i)
        {
            if(isdigit(atoi(s[i])))
                cout<<atoi(s[i]);
        }
        cout<<endl;
    }
    return 0;
}