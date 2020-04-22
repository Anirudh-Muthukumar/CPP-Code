/*
Given an array of integers A, a move consists of choosing any A[i], and incrementing it by 1.
Return the least number of moves to make every value in A unique.

Time complexity : O(n)
Space complexity : O(n)

*/

#include<bits/stdc++.h>
using namespace std;

int minIncrementForUnique(std::vector<int>& A) {
    std::vector<int> taken;
    map<int, int> count;
    int ans = 0;
    int n = A.size();
    for(int i=0;i<n;++i){
        if (count.find(A[i])==count.end())
            count[A[i]] = 0;
        count[A[i]]+=1;
    }
    
    for(int x=0;x<50000;++x)
    {
        if(count.find(x)!=count.end() && count[x]>=2){
            for(int k=0;k<count[x]-1;++k)
                taken.push_back(x);
        }
        else if(count.find(x)==count.end() && taken.size()>0){
            ans += x - taken.back();
            taken.pop_back();
        }
    }
    
    return ans;
}

int main()
{
    std::vector <int> A;
    int arr[] = {3,2,1,2,1,7};
    for(int i=0;i<6;++i)
        A.push_back(arr[i]);
    cout<<minIncrementForUnique(A)<<endl;
    return 0;
}