#include <bits/stdc++.h>
using namespace std;
bool recurssive(int a,int b,vector<int> temp)
{
    if(a==b)
    {
        cout<<"YES"<<endl;
        cout<<temp.size()<<endl;
        for(auto i:temp)
        cout<<i<<" ";
    return true;
    }
    if(a>b)
    return false;
    temp.push_back(a*2);
    bool ans=recurssive(a*2,b,temp);
    temp[temp.size()-1]=(10*a)+1;
    bool ans1=recurssive((10*a)+1,b,temp);
    return ans || ans1;
}
int main() {
 
 int a,b;
 cin>>a>>b;
 vector<int> temp;
 temp.push_back(a);
 if(!recurssive(a,b,temp))
 cout<<"NO";
    return 0;
}