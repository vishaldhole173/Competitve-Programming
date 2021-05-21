#include<bits/stdc++.h>
using namespace std;
//Time O(n)
const int N=1e5;
int p[N];
int a[N];
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        p[i]=p[i-1]+a[i];
    }
    int q; cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        long long sum=0;                            
        cout<<p[r]-p[l-1]<<endl;
    }
}