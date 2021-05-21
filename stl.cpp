#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p;
    p.first=10;
    p.second=30;
    pair<int,int> &p1=p;
    p1.first=9;
    cout<<p.first<<" "<<p.second<<endl;

    vector<int> v(10,69);
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> v1=v;    //O(n) makes copy
    vector<pair<int,int>> vec={{1,2},{3,4},{5,6}};
    vec.push_back({7,8});
    for(auto x:vec)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    vector<int> v4={56,5,43,234,3,42};
    vector<int>::iterator it=v4.begin();
    while (it!=v4.end())
    {
        cout<<(*it)<<" ";
        it++;
    }
    cout<<endl;
    int arr[]={-1,-2,-1,-6,-5,-6};
    int hash[6]={0};
    for(int i=0;i<6;i++)
    {
        hash[arr[i]+6]++;
    }
    cout<<hash[-6+6]<<endl;
    unordered_map<int,int> mp;
    for(int x:arr)
    {
        mp[x]++;
    }

    cout<<mp[-6]<<endl;

    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    map<string,int> ms={{"vishal",10},{"chuts",20},{"abhi",69}};

    for(auto i:ms)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    set<int> ss={1,233,3,233,2,6};
    ss.insert(100);
    ss.erase(3);
    for(auto c:ss)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    map<set<int,int>,int> mpl;
    map<pair<string,string>,vector<int>> mp2;
    mp2[{"vishal","dhole"}].push_back(4);
    for(auto &j:mp2)
    {
        cout<<j.first.first<<" "<<j.first.second<<" ";
        for(auto k:j.second)
        {
            cout<<k<<" "<<endl;
        }
    }


}