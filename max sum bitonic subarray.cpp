#include<stdio.h>
#include<numeric>
#include<algorithm>
#include<iostream>
using namespace std;


int maxSubitonic(int arr[], int n)
{
    int max_sum = INT_MIN;
    int i = 0;
    while(i<n)
    {
        int j = i;
        // finding increasing subarray
        while(j+1<n && arr[j]<arr[j+1])
            j++;
        //remove non-positive elements amap
        while(i<j && arr[i]<=0)
            ++i;

        int k =j;
        // finding decreasing subarray
        while(k+1<n && arr[k]>arr[k+1])
            ++k;
        int last = k;           

        // remove non-positive elements amap
        while(k>j&& arr[k]<=0)
            --k;

        int sum_inc = accumulate(arr+i, arr+j+1, 0);
        int sum_dec = accumulate(arr+j, arr+k+1, 0);
        int sum_all = sum_inc + sum_dec - arr[j];

        max_sum = max(max(max_sum, sum_all), max(sum_inc, sum_dec));

        i = max(last,i+1);
    }
    return max_sum;
}
int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d", &n);
        int a[100010];
        for(i=0;i<n;++i)
            scanf("%d",&a[i]);
        printf("%d\n", maxSubitonic(a,n));
    }
    
    return 0;
}