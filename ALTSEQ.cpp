#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define maxsize 10000000+10

lli n, A[maxsize], LAS[maxsize][2];

bool sign(lli x) { return (x>0) ? 1 : 0 ; }
int max(lli x, lli y) { return (x>y) ? x : y ;}

void solve()
{
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>A[i];
    
    memset(LAS, 0, sizeof(LAS));

    for(int i=0; i<n; ++i)
    {
        for (int j=0; j<i ; ++j)
        {
            if(abs(A[i])>abs(A[j]) and sign(A[i])==1-sign(A[j]) and LAS[j][sign(A[j])] > LAS[i][sign(A[i])]){
                LAS[i][sign(A[i])] = LAS[j][sign(A[j])];
            }
        }
        LAS[i][sign(A[i])]+=1;
    }
    
    int res = 0;
    for(int i=0;i<n;++i)
        res = max(res, max(LAS[i][0], LAS[i][1]));
    cout<<res<<endl;
}

int main()
{
    solve();
    return 0;
}