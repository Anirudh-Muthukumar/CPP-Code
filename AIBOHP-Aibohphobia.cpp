#include<bits/stdc++.h>
using namespace std;

int T[6110][6110];
int t;
string s;

int LCS(string x)
{
    string y = x;
    reverse(y.begin(), y.end());
    for(int i=1; x[i-1]; i++)
        for(int j=1; y[j-1]; j++)
        {
            if(x[i-1]==y[j-1])
                T[i][j] = T[i-1][j-1] + 1;
            else
                T[i][j] = max(T[i-1][j], T[i][j-1]);
        }
    
    return T[x.size()][y.size()];
}

void solve()
{
    cin>>t;
    while(t--)
    {
        cin>>s; 
        memset(T, 0, sizeof(T));
        cout<<s.size() - LCS(s)<<endl;
    }
}

int main()
{   
    solve();
    return 0;
}