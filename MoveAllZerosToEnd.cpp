/*
Move all the zeros to the right while maintaining the relative position of all the non-zero elements.

Time complexity : O(n)
Space complexity: O(1)

*/

#include<iostream>
using namespace std;
#define pb push_back
void swap(int *a, int *b) { *b=*b^*a;*a=*b^*a;*b=*b^*a;}

int A[1000], n;

void moveZeros(int n)
{
    int lo=0, hi;
    for(hi=0;hi<n;++hi)
        if(A[hi]!=0)
            swap(A[lo++], A[hi]);
}


int main()
{
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>A[i];
    cout<<"\nNew Array: ";
    moveZeros(n);
    for(int i=0;i<n;++i)
        cout<<A[i]<<" ";
    cout<<endl;
}