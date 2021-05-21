#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    unordered_map<int,int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    int q;
    cin>>q;
    while (q--)
    {
        int p;
        cin>>p;
        cout<<m[p]<<endl;
    }
    
}