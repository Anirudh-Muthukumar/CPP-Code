/*
Find the length of shortest unsorted subarray
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> A;
int n;

int findUnsortedSubarray()
{
    int lo = 0, hi = n-1;

    while(lo<n && lo>=(lower_bound(A.begin()+lo, A.end(), A[lo]) - A.begin()))
        lo++;
    
    if(lo==n) // Array is sorted
        return 0;
    
    while(hi>lo && A[hi]==*max_element(A+lo, A+hi+1))
        hi--;
    
    // entirely unsorted array
    if(lo==0 && hi==n-1)
        return n;
    
    return hi-lo+1;
}

int main()
{
    cin>>n;
    int z;
    for(int i=0;i<n;++i){
        cin>>z;
        A[i].push_back(z);
    }

    cout<<findUnsortedSubarray()<<endl;
}