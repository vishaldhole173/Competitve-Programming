#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> a;

void findCombination(int i,int target,vector<int> &nums,vector<int> &v)
{
    if(i==nums.size())
    {
        if(target==0) a.push_back(v);

        return;
    }
    
    if(nums[i]<=target)
    {
        v.push_back(nums[i]);
        findCombination(i,target-nums[i],nums,v);
        v.pop_back();
    }

    findCombination(i+1,target,nums,v);
}

vector<vector<int>> combinations(vector<int> &nums,int target)
{
    vector<int> v;
    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());  // removes dupllicate elements
    findCombination(0,target,nums,v);
    return a;
}

int main()
{
    vector<int> nums={2,3,4,5,6,6};
    //vector<int> nums={10,1,2,7,6,1,5};
    int target=12;
    //int target=8;
    vector<vector<int>> ans=combinations(nums,target);
    for(auto x:ans)
    {
        for(auto i:x)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}