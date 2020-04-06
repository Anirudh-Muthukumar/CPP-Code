#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size())
            return false;
        
        string mask1 = "00000000000000000000000000000";
        string mask2 = "00000000000000000000000000000";
        
        
            
        for(int i=0;s[i];++i)
            mask1[s[i]-'a'] = char(int(mask1[s[i]-'a'])+1);
            
        
        for(int i=0;t[i];++i)
            mask2[t[i]-'a'] = char(int(mask2[t[i]-'a'])+1);
        
        return mask1==mask2;
    }
};