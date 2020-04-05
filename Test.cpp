#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back

void swap(int *a, int *b){ *b = *b ^ *a; *a = *b ^ *a; *b = *b ^ *a; }

int main()
{
    int a, b;
    a = -6;
    b = -3785;
    cout<<a<<" "<<b<<endl;
    swap(&a, &b);
    cout<<a<<" "<<b<<endl;
}