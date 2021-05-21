#include<bits/stdc++.h>
using namespace std;
/*
brut force
int main()
{
    int t;
    cin>>t;
    
    while (t--)
    {
       int n,q;
       cin>>n>>q;
       int a[n+10];
       for(int i=1;i<=n;i++)
       {
           cin>>a[i];
       }
        while (q--)
        {
            int l,r;
            cin>>l>>r;
            int gc=0;
            for(int i=1;i<l;i++)
            {
               gc=__gcd(gc,a[i]);
            }
            for(int i=r+1;i<=n;i++)
            {
                gc=__gcd(gc,a[i]);
            }
            cout<<gc<<endl;
        }
        
    }
    
}
*/

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n,q;
       cin>>n>>q;
       int a[n+10];
       int forward[n+10];
       int backward[n+10];
       forward[0]=backward[n+1]=0;
       for(int i=1;i<=n;i++)
       {
           cin>>a[i];
       }
       for(int i=1;i<=n;i++)
       {
           forward[i]=__gcd(forward[i-1],a[i]);    // Time complexity __gcd() -> O(log(max_element))
       }
       for(int i=n;i>=1;i--)
       {
           backward[i]=__gcd(a[i],backward[i+1]);
       }
       while(q--)
       {
           int l,r;
           cin>>l>>r;
           cout<<__gcd(forward[l-1],backward[r+1])<<endl;
       }
    }
    
}