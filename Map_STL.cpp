#include<bits/stdc++.h>
using namespace std; 

int main()
{
    map<string, int> mp;
    int A[] = {1,2,3};
    string a = "";
    for(int i=0; i<3; ++i)
        a += to_string(A[i]) + ",";
    mp[a] = 1;
    // string b = "1,1,1";
    // mp[b] = 2;
    string c = "1,2,3,";
    if(mp.find(c)!=mp.end())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}