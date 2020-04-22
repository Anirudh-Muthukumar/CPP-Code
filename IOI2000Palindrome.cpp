#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int LCS(string x)
{
    string y = x;
    reverse(y.begin(), y.end());

    int first[5010] = {0};
    int second[5010] = {0};
    
    for(int i = 1; x[i-1]; ++i)
    {
        for(int j = 1; y[j-1]; ++j)
        {
            if(x[i-1]==y[j-1]){
                T[i][j] = T[i-1][j-1] + 1;
                second[j] = first[j-1] + 1;
            }
            else{
                T[i][j] = max(T[i-1][j], T[i][j-1]);
                second[j] = max(first[j], second[j-1]);
            }
        }
        for(int j = 1; y[j-1]; ++j){
            first[j] = second[j];
        }

    }
    return second[x.size()];

}

int main()
{   
    scanf("%d", &n);
    cin>>s;
    printf("%d\n", n - LCS(s));
    return 0;
}