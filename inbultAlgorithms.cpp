#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]={34,45,56,67,23};
    sort(a,a+5);                    //TIME : O(logn) average & O(nlogn) worst, made using quick sort, heap sort and insertion sort 
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    int *ptr=lower_bound(a,a+5,45);
    cout<<endl<<*ptr<<endl;
    int *p2=upper_bound(a,a+5,67);
    if(p2==(a+5))
    {
        cout<<"Not FOUND"<<endl;
    }
    else
    {
        cout<<*p2<<endl;
    }
    vector<int> v={45,2,33,4,23,23,12,334};
    sort(v.begin(),v.end(),greater<int>());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    auto x=min_element(v.begin(),v.end());
    cout<<*x<<endl;
    vector<int>::iterator y=max_element(v.begin(),v.end());
    cout<<*y<<endl;

    cout<<accumulate(v.begin(),v.end(),0)<<endl;
    cout<<count(v.begin(),v.end(),23)<<endl;

    auto it3=find(v.begin(),v.end(),12);
    if(it3==v.end())
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<*it3<<" is present"<<endl;
    }

    reverse(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    string g="Vishal Dhole";
    reverse(g.begin(),g.end());
    cout<<g<<endl;
}