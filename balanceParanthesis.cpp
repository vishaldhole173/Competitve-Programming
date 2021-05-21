#include<bits/stdc++.h>
using namespace std;
string isbalanced(string s)
{
    unordered_map<char,int> m={{'(',1},{'[',2},{'{',3},{')',-1},{']',-2},{'}',-3}};
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(m[s[i]]>0)
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())
            {
                return "NO";
            }
            else
            {
                char x=st.top();
                st.pop();
                if(m[x]+m[s[i]]!=0) return "NO";
            }
        }
    }
    if(st.empty())
    {
        return "YES";
    }
    else{
        return "NO";
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        cout<<isbalanced(s)<<endl;
    }
    
}