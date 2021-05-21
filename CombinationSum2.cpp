#include<bits/stdc++.h>
using namespace std;
 void find(vector<int> &candidates,vector<int> &v,vector<vector<int>> &ans,int target,int i)
    {
            if(target==0)
            {
                ans.push_back(v);
                return ;
            }
           
            if(target<0 || i==candidates.size())
            {
                return;
            }

            v.push_back(candidates[i]);
            find(candidates,v,ans,target-candidates[i],i+1);
            v.pop_back();

            while (i+1<candidates.size() && candidates[i]==candidates[i+1])
            {
                i++;
            }
            find(candidates,v,ans,target,i+1);
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> v;
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        find(candidates,v,ans,target,0);
        return ans;
    }

    int main()
    {
    //vector<int> canditates={2,3,4,5,6,6};
    vector<int> candidates={10,1,2,7,6,1,5};
    //int target=12;
    int target=8;
    vector<vector<int>> ans1=combinationSum2(candidates,target);
    for(auto x:ans1)
    {
        for(auto i:x)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    }