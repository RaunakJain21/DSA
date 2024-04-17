#include <bits/stdc++.h>
using namespace std;

void recurssive(int i,string &s)
{
    // int n=s.length();
    if(i==s.length()-1)
    {
        cout<<s<<endl;
        return;
    }
     recurssive(i+1,s);
     int j;
     char temp;
    for(j=i+1;j<s.length();j++)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        recurssive(i+1,s);
         temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    return;
    // recurssive(i+1,s);
}
int main()
{
    // std::cout<<"Hello World";
    string s;
    cin>>s;
    recurssive(0,s);

    return 0;
}