
// On the first row, we write a 0. Now in every subsequent row, we look at the previous row and 

// replace each occurrence of 0 with 01, and each occurrence of 1 with 10.

// Given row n and index k, return the kth indexed symbol in row n. (The values of k are 1-indexed.) (1 indexed)

// explaination

// n=1 0    length 2^0=1  
// n=2 01   length 2^1=2   mid=length/2
// n=3 0110 length 2^2=4   mid=length/2
// n=4 0110 1001   half same half complement

#include<bits/stdc++.h>
using namespace std;

int kthGrammar(int n,int k)
{
    if(k==1 && n==1)
        return 0;
    int mid=pow(2,n-1)/2;
    if(k<=mid)
        return kthGrammar(n-1,k);
    else
        return !kthGrammar(n-1,k-mid); 
}
int revisekthGrammar(int n,int k)
{
    if(n==1 && k==1)
    {
        return 0;
    }
    int mid=pow(2,n-1)/2;
    if(k<=mid)
    {
        return revisekthGrammar(n-1,k);
    }
    else
    {
        return !revisekthGrammar(n-1,k-mid);
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<revisekthGrammar(n,k);
}