#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, p;
    s = "cbaebabacd";
    p = "abc";

    string mask_s = "", mask_p = "";
    mask_s.resize(26); mask_p.resize(26);
    fill(mask_s.begin(), mask_s.end(), '0');
    fill(mask_p.begin(), mask_p.end(), '0');
    
    for(int i=0;p[i];++i)
        mask_p[p[i]-'a'] = char(int(mask_p[p[i]-'a'])+1);

    for(int i=0;i<p[i];++i)
        mask_s[s[i]-'a'] = char(int(mask_s[s[i]-'a'])+1);

    int p_size = p.size();
    int n = s.size() - p_size;

    vector<int> res;

    if(mask_p==mask_s)  
        res.push_back(0);
    
    for(int i=1;i<=n;++i)
    {
        mask_s[s[i-1]-'a'] = char(int(mask_s[s[i-1]-'a'])-1);
        mask_s[s[i+p_size-1]-'a'] = char(int(mask_s[s[i+p_size-1]-'a'])+1);
        if(mask_p==mask_s)  
            res.push_back(i);

    }
    for(int i=0;i<res.size();++i)
        cout<<res[i]<<" ";
    cout<<endl;
    return 0;
}