#include<bits/stdc++.h>
using namespace std;
vector<string> valid;
void generate(string &s,int open,int close)
{
    if(open==0 && close==0)
    {
        valid.push_back(s);
        return;
    }
    if(open>0)
    {
        s.push_back('(');
        generate(s,open-1,close);
        s.pop_back();
    }
    if(close>0)
    {
        if(close>open)
        {
            s.push_back(')');
            generate(s,open,close-1);
            s.pop_back();
        }
    }
}
void generateParenthesis(string s,int open,int close)
{
    if(open==0 && close==0)
    {   
        valid.push_back(s);
        return;
    }
    if(open>0)
    {
        s.push_back('(');
        generateParenthesis(s,open-1,close);
        s.pop_back();
    }
    if(close>open)
    {
        s.push_back(')');
        generateParenthesis(s,open,close-1);
        s.pop_back();
    }
}
int main()
{
    int n;
    cin>>n;
    string s;
    generateParenthesis(s,n,n);
    for(auto ele:valid)
    {
        cout<<ele<<endl;
    }
}