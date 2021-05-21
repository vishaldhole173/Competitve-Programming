#include<bits/stdc++.h>
using namespace std;

int main()
{   
    // int -10^9 to 10^9 
    // long int -10^12 to 10^12
    // long long int -10^19 to 10^19
    int a=100000;
    int b=100000;
    long long int c=a*1LL*b;
    cout<<c<<endl;
    long int sum;

    string s="vishal";
    string s1;
    s1.push_back(s[0]);
    cout<<s1<<endl;
    
    s1.append("aishali");
    s1.erase(5);
    cout<<s1<<endl;
    
    int a1=1e8;
    int arr[a1];

    for (int i = 0; i < a1; i++)
    {
        arr[i]=i;
    }
    cout<<arr[a1-1];
    


    return 0;
}