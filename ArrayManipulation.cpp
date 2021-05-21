#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int a[N];
/*brutforce
int main()
{   
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int b,c,d;
        cin>>b>>c>>d;
        for(int i=b;i<=c;i++)
        {
            a[i]+=d;
        }
    }
    long long mx=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
        }
    }
    cout<<mx<<endl;
}
*/
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int b,c,d;
        cin>>b>>c>>d;
        a[b]+=d;
        a[c+1]+=-d;
    }
    for(int i=1;i<=n;i++)
    {
        a[i]+=a[i-1];
    }
    long long mx=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
        }
    }
    cout<<mx<<endl;
}