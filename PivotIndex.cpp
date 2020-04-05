#include<bits/stdc++.h>

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return -1;
        map<int, int> prefix;
        map<int, int> postfix;
        prefix[0] = nums[0];
        for(int i=1;i<n;++i){
            prefix[i] = prefix[i-1] + nums[i];
            // cout<<prefix[i]<<' '<<prefix[i-1]<<' '<<nums[i]<<endl;
        }
        postfix[n-1] = nums[n-1];
        for(int i=n-2;i>=0;--i)
            postfix[i] = postfix[i+1] + nums[i];
        
        
        prefix[-1] = 0;
        postfix[n] = 0;
        
  
        for(int i=0;i<n;++i)
            if(prefix[i-1]==postfix[i+1])
                return i;
        
        return -1;        
             
    }
};