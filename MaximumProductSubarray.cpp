#include<bits/stdc++.h>
using namespace std;

#define lli long long int
lli max(lli a, lli b) { return (a>b) ? a: b; }
lli min(lli a, lli b) { return (a<b) ? a: b; }

lli A[1000], n;

lli maximumProduct()
{
    lli maxval = 1, minval = 1, ans = INT_MIN, prevmax;

    for(int i=0;i<n;++i)
    {
        if(A[i]>0)
        {
            maxval *= A[i];
            minval = min(1, minval * A[i]);
        }
        else if (A[i]==0)
        {
            minval = 1;
            maxval = 0;
        }
        else
        {
            prevmax = maxval;
            maxval = minval * A[i];
            minval = prevmax * A[i];
        }

        ans = max(ans, maxval);

        if (maxval<=0)
            maxval = 1;
    }

    return maxval;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>A[i];
    cout<<maximumProduct()<<endl;
}