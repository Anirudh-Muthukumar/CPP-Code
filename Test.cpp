#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back

int main()
{
    map<string, vector<string> > mp;
    string a = "00000000000000000000000000";

    string s = "tan";
    for(int ch=0;s[ch];ch++)
        a[s[ch]-'a'] = char(int(a[s[ch]-'a']) + 1);
    cout<<a<<" "<<s<<endl;
    mp[a].push_back(s);

    a = "00000000000000000000000000";
    s = "tea";
    for(int ch=0;s[ch];ch++)
        a[s[ch]-'a']++;
    cout<<a<<" "<<s<<endl;
    mp[a].push_back(s);

    cout<<mp.size()<<endl;
    return 0;
}