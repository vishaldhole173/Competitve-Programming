#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={4,5,6,7,8};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
    cout<<any_of(v.begin(),v.end(),[](int x){return x<0;})<<endl;
    cout<<none_of(v.begin(),v.end(),[](int x){return x<0;})<<endl;
    vector<int> arr = {3, 2, 1, 2, 3, 1, 1};
    unordered_map<int,int> m;
    for(auto x:arr)
    {
        if(m.find(x)!=m.end())
        {
            m[x]++;
        }
        else
        {
            m[x]=1;
        }
    }
    
    int p=0;
    for(auto x:arr)
    {
        p=p^x;
    }
    cout<<p<<endl;
}