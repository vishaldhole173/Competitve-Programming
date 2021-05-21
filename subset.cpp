#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets;

void generate(vector<int> &subset,int i,vector<int> &v)
{
    if(i==v.size())    //i is greater than last index
    {
        subsets.push_back(subset);
        return;
    }

    //i th element not in subset
    generate(subset,i+1,v);

    //i th element in subset
    subset.push_back(v[i]);
    generate(subset,i+1,v);
    subset.pop_back();
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<int> subset;
    generate(subset,0,v);
    for(auto x:subsets)
    {
        for(auto ele:x)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}