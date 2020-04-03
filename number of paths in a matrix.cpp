#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,i,m,n,j;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &m, &n);
        int count[16][16]={0};
        for(i=0;i<m;++i)
            count[i][0]=1;
        for(j=0;j<n;++j)
            count[0][j]=1;
        for(i=1;i<m;++i)
            for(j=1;j<n;++j)
                count[i][j]=count[i-1][j]+count[i][j-1]; //+ count[i-1][j-1] if diagonal movement is allowed
        
        printf("%d\n", count[m-1][n-1]);
    }
    return 0;
}