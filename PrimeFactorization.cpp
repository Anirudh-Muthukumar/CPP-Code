#include<bits/stdc++.h>
using namespace std;

#define lli long long int

void primeFactorization(lli x)
{
    map<int, int> factors;
    lli temp = x;
    while(temp%2==0)
    {
        if(factors.find(2)==factors.end())
            factors[2] = 0;
        factors[2]++;
        temp = temp/2;
    }
    // cout<<x<<endl;
    temp = x;
    for(int i = 3; i <= x/2; i+=2)
    {
        factors[i] = 0;
        temp = x;
        while(temp%i==0)
        {
            factors[i]++;
            temp = temp/i;
        }
    }

    cout<<x<<endl;

    for(auto it : factors)
    {
        if(it.second>0)
            cout<<it.first<<" "<<it.second<<endl;
    }
}

int main()
{
    lli n;
    scanf("%lld", &n);
    primeFactorization(n);
    return 0;
}