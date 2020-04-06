#include<bits/stdc++.h>
using namespace std;


int findMSD(long long int N)
{
    double K = log10(N);
    K -= floor(K);
    int X = pow(10, K);
    return X;
}

int main()
{
    long long int n;
    scanf("Enter the number : %lld", &n);
    printf("MSD = %d\n", findMSD(n));
    return 0;
}