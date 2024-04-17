#include <bits/stdc++.h>
using namespace std;

void swap(string &s,int i,int j)
{
     char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        return;
}

void recurssive(int i,string &s,vector<bool>&check)
{
    if(i==s.length()-1)
    {
        cout<<s<<endl;
        return;
    }
     recurssive(i+1,s,check);
     int j;
    for(j=i+1;j<s.length();j++)
    {
        if(check[s[j]]==false)
        {
            swap(s,i,j);
            recurssive(i+1,s,check);
            swap(s,i,j);
             check[s[j]]=true;
         }
    }
    return;
}
int main()
{
    vector<bool>check(256,false);
    string s;
    cin>>s;
    recurssive(0,s,check);

    return 0;
}