/*
Using Divide and conquer approach
Time complexity : O(nlogn)
Space complexity: O(1)
*/

# include<bits/stdc++.h>
using namespace std;

#define lli long long int
lli max(lli a, lli b) { return (a>b)? a : b; }
lli max(lli a, lli b, lli c) { return max(a, max(b,c)); }
lli A[6100], n, z;

lli maxCrossingSum(lli lo, lli mid, lli hi)
{
    lli left_sum = INT_MIN;
    lli sum = 0;
    for(int i=mid;i>=lo;--i){
        sum += A[i];
        left_sum = max(left_sum, sum);
    }

    lli right_sum = INT_MIN;
    sum = 0;
    for(int i=mid+1;i<=hi;i++){
        sum += A[i];
        right_sum = max(right_sum, sum);
    }

    return left_sum + right_sum;
}

lli maximumSubarray(lli lo, lli hi)
{
    if(lo==hi)
        return A[lo];
    
    lli mid = (lo+hi)/2;
    
    // max of left half, right half and crossing sum
    return max(maximumSubarray(lo, mid),
                 maximumSubarray(mid+1, hi),
                    maxCrossingSum(lo, mid, hi));
}

int main()
{
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>A[i];

    cout<<"Maximum sum subarray = "<<maximumSubarray(0, n-1)<<endl;
}