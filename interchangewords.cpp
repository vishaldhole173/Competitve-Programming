#include<bits/stdc++.h>
using namespace std;
void interchange(string s)
{   
   stack<string> st;
   string word;
   for(auto x:s)
   {
       if(x==' ')
       {
           st.push(word);
           word="";
       }
       else
       {
           word+=x;
       }
   }
   st.push(word);
   while (!st.empty())
   {
       cout<<st.top()<<" ";
       st.pop();
   }
   
}
int main()
{
    string s;
    vector<string> v;
    // cout<<"ENter string"<<endl;
    getline(cin,s);
    interchange(s);
}