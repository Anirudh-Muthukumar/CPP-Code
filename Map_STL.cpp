#include<bits/stdc++.h>
using namespace std; 

int main()
{
    map<int*, vector<string> > mp;
    int a[] = {1,2,3};
    vector<string> v;
    mp[a] = v;
    for(pair<int*, vector<string> >element: mp)
    {
        int *b = element.first;
        vector<string> ms = element.second;
    }
    return 0;
}