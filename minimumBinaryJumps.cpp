#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int jump=0;
        while(n>0)
        {   
            if(n&1==1)
            {
                jump++;
            }
            n=n>>1;
            // OR
            // n=n&(n-1);
            // jump++;
        }
        cout<<jump<<endl;
    }
}