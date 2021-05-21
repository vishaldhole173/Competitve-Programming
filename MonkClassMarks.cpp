#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     map<int,multiset<string>> m;

//     int n;
//     cin>>n;

//     while (n--)
//     {
//         int marks;
//         string name;
//         cin>>name>>marks;
//         m[marks].insert(name);
//     }
//     auto it=--m.end();
//     while(true)
//     {
//         auto s=it->second;
//         auto mark=it->first;
//         for(auto x:s)
//         {
//             cout<<x<<" "<<mark<<endl;
//         }
//         if(it==m.begin())
//         {
//             break;
//         }
//         it--;
//     }
// }
int main()
{
    int N;
    cin>>N;
    map<int,multiset<string>> m;
    while (N--)
    {
        int marks;
        string name;
        cin>>name>>marks;
        m[marks].insert(name);
    }
    auto it=--m.end();
    while(true)
    {   
        auto mark=it->first;
        auto s=it->second;
        for(auto x:s)
        {
            cout<<x<<" "<<mark<<endl;
        }
        if(it==m.begin())
        {
            break;
        }
        it--;
    }
}