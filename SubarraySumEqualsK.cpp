/*
Find the number of subarrays (contiguous) with sum equals K.

Time complexity : O(n)
Space complexity: O(n)
*/

#include<bits/stdc++.h>
using namespace std;

int A[1000], n, k;

int subarraySumEqualsK()
{
    int ans = 0, sum = 0;
    map<int, int> mp;
    mp[0] = 1;
    for(int i=0;i<n;++i)
    {
        sum += A[i];
        if (mp.find(sum-k)!=mp.end())
            ans += mp[sum-k];
        
        if (mp.find(sum)!=mp.end())
            mp[sum] += 1;
        else
            mp[sum] = 1;
    }
    return ans;
}


int main()
{
    cin>>n>>k;
    for(int i=0;i<n;++i)
        cin>>A[i];
    cout<<subarraySumEqualsK()<<endl;
}