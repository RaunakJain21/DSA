#include <bits/stdc++.h>
using namespace std;
void recurssive(int i,int j,string s)
{
    if(i==0 && j==0)
    {
        // s.push_back(')');
        stack<char>st;
        for(auto c:s)
        {
            if(c=='(' || c=='{')
            st.push(c);
            else{
                if(st.empty())
                return;
                if(c=='}')
                {
                    if(st.top()!='{')
                    return;
                }
                else
                {
                     if(st.top()!='(')
                    return;
                }
            st.pop();
            }
        }
        if(st.empty())
        {
            cout<<s<<endl;
        }
        return;
    }
    if(i>=1)
    {
    s.push_back('(');
    recurssive(i-1,j,s);
    s.pop_back();
    s.push_back(')');
     recurssive(i-1,j,s);
    }
    if(j>=1)
    {
            s.push_back('{');
    recurssive(i,j-1,s);
    s.pop_back();
    s.push_back('}');
     recurssive(i,j-1,s);
    }
     return;
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
     int n,sum;
      cin>>n;
      n=n*2;
  string str="";
  recurssive(n,n,str);

    return 0;
}