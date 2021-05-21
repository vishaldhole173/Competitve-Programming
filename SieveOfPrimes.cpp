#include<bits/stdc++.h>
using namespace std;
void sieveofPrime(int n)
{
    int a[n+1];
     for(int i=0;i<n+1;i++)
    {
        a[i]=1;
    }
    a[0]=0;
    a[1]=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        for(int j=2*i;j<=n;j+=i)
        {
            a[j]=0;
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(a[i]==1)
        {
            cout<<i<<" is prime"<<endl;
        }
    }
}
 int countPrimes(int n) {      
        if (n == 0)
            return 0;
        bool prime [n];
        memset (prime, true, sizeof (prime));
        for (int i = 2; i*i < n; i++) {
            if (prime [i] == true) { 
				// Update all multiples of i to false if i is prime
                for (int j = i * i; j < n; j += i)
                    prime [j] = false;
            }
        }
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (prime [i])
                count++;
        }
        return count;
    }
int main()
{
    int n;
    cin>>n;
    sieveofPrime(n); 
    cout<<countPrimes(n);
}