#include<iostream>
using namespace std;

int main()
{
    char b[101];
    int A[26]={0}, B[26]={0};
    int i,j;
    i=j=0;
    cin>>b;
    cout<<b<<endl;
    while(b[i]!='\0')
        cout<<b[i];
    cout<<endl;
    
    return 0;
}