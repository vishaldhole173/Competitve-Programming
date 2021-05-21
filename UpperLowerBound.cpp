#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> v,int ele)
{
    int low=0;
    int high=v.size()-1;
    
    while(high-low>1)
    {   
        int mid=(low+high)/2;
        if(v[mid]<ele)
        {
            low=mid+1;
        }
        else
        {
            high=mid;
        }
    }
    if(v[low]>=ele)
    {
        return low;
    }
    if(v[high]>=ele)
    {
        return high;
    }
    return -1;
}
int upper_bound(vector<int> v,int ele)
{
    int low=0;
    int high=v.size()-1;
    while(high-low>1)
    {
        int mid=low+(high-low)/2;
        if(v[mid]<=ele)
        {
            low=mid+1;
        }
        else
        {
            high=mid;
        }
    }
    if(v[low]>ele)
    {
        return low;
    }
    if(v[high]>ele)
    {
        return high;
    }
    return -1;
}
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8};
    int ele;
    cin>>ele;
    cout<<lower_bound(v,ele)<<endl;
    cout<<upper_bound(v,ele)<<endl;
}