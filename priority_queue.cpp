#include<iostream>
#include<queue>
using namespace std;

int main()
{
    double arr[] = { 1,2,3,4,5};
    priority_queue<int,vector<int>,greater<int> > A;
    priority_queue<int,vector<int>,greater<int> > B;
    A.push(4);
    B.push(12);
    A.push(5);
    printf("%d %d\n", A.top(), B.top());
    B.push(11);
    A.push(3);
    printf("%d %d\n", A.top(), B.top());
    return 0;
}