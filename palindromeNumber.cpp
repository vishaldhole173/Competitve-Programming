#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x)
{   
     if(x<0)
     {
         return false;
     }
     int reverse=0;
     int xcopy=x;
     while(true)
     {
         int rem=xcopy%10;
         xcopy=xcopy/10;
         reverse+=rem;
         if(xcopy==0)
         {
             break;
         }
         else
         {
             if(reverse*10 >INT_MAX)
             {
                 return false;
             }
             reverse*=10;
         }
     }
     if(x==reverse)
     {
         return true;
     }
     return false;
}

int main()
{
    int n;
    cin>>n;
    cout<<isPalindrome(n)<<endl;
}

 