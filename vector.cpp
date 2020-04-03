#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout<<"Hello World!!\n";
    vector<int> f(1<<6, -1);
    int ct = 0;
    for (auto x : f){
        ct += 1;
        // cout<<x<<endl;
    }
    cout<<ct<<endl;
    return 0;
}