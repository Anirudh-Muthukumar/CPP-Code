/*
Number of subarrays (contiguous) with sum less than K 

Time complexity : O(n)
Space complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int A[1000], n, k;

int subarraySumLessThanK()
{
    int prod = 1, lo = 0, ans = 0;
    
    for(int hi = 0; hi<n; ++hi)
    {
        prod *= A[hi];

        while (prod>=k)
            prod /= A[lo++];
        
        ans += (hi-lo+1);
    }
    
    return ans;
}


int main()
{
    cin>>n>>k;
    for(int i=0;i<n;++i)
        cin>>A[i];
    cout<<subarraySumLessThanK()<<endl;
}