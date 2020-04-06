#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector< vector<string> > groupAnagrams(vector<string>& strs) {
        map<string, vector<string> > mp;
        for(int i=0;i<strs.size();++i)
        {
            string mask = "00000000000000000000000000";
            
            for(int ch=0;strs[i][ch];++ch)
                mask[strs[i][ch]-'a'] = char(int(mask[strs[i][ch]-'a'])+1);
            
            mp[mask].push_back(strs[i]);
        }
        // cout<<mp.size()<<endl;
        vector< vector<string> > res;
        
        for(pair<string, vector<string> > element: mp)
        {
            res.push_back(element.second);
        }
        
        return res;
    }
};