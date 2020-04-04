/*
Maximum product of three numbers. 

Time complexity : O(n)
Space complexity: O(1)

*/

#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a>b) ? a : b; }

int A[1000], n;

int maxThree()
{
    int max1, max2, max3, min1, min2;
    max1 = max2 = max3 = INT_MIN;
    min1 = min2 = INT_MAX;

    for(int i=0;i<n;++i)
    {
        // x lies above max1
        if(A[i]>max1)
        {   
            max3 = max2;
            max2 = max1;
            max1 = A[i];
        }
        // x lies between max1 and max2
        else if(A[i]>max2)
        {
            max3 = max2;
            max2 = A[i];
        }
        // x lies between max2 and max3
        else if(A[i]>max3)
        {
            max3 = A[i];
        }

        // x lies below min1
        if (A[i]<min1)
        {
            min2 = min1;
            min1 = A[i];
        }
        // x lies between min1 and min2
        else if(A[i]<min2)
        {
            min2 = A[i];
        }
    }

    return max(min1 * min2 * max1, max1 * max2 * max3);

}

int main()
{
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>A[i];
    cout<<maxThree()<<endl;
    return 0;
}