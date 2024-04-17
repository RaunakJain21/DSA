#include <bits/stdc++.h>
using namespace std;
void recurssive(int i,string s)
{
    if(i==1)
    {
        s.push_back(')');
        stack<char>st;
        for(auto c:s)
        {
            if(c=='(')
            st.push('(');
            else{
                if(st.empty())
                return;
            st.pop();
            }
        }
        if(st.empty())
        {
            cout<<s<<endl;
        }
        return;
    }
    s.push_back('(');
    recurssive(i-1,s);
    s.pop_back();
    s.push_back(')');
     recurssive(i-1,s);
     return;
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
     int n,sum;
      cin>>n;
      n=n*2;
   string str="(";
  recurssive(n-1,str);

    return 0;
}