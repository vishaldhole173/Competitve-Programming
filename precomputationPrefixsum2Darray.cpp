// 1<=N<=10^3
// 1<=a[i][j]<=10^9
// 1<=q<=10^5
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int arr[N][N];
long long pf[N][N];
/*
Ordinary approach : Time Limit Exceeds
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int q;
    cin>>q;
    while (q--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        long long sum=0;
        for(int i=x1;i<=x2;i++)
        {
            for(int j=y1;j<=y2;j++)
            {
                sum+=arr[i][j];
            }
        }
        cout<<sum<<endl;
    }  
}
*/
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
            pf[i][j]=arr[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<pf[x2][y2]-pf[x1-1][y2]-pf[x2][y1-1]+pf[x1-1][y1-1]<<endl;
    }
}