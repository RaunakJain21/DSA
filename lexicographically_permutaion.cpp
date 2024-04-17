#include <bits/stdc++.h>
using namespace std;

void recurssive(int i,string &s)
{
    if(i==s.length()-1)
    {
        cout<<s<<endl;
        return;
    }
     recurssive(i+1,s);
     int j,k;
     char temp;
    for(j=i+1;j<s.length();j++)
    {
        // Right shift
        temp=s[j];
        for(k=j-1;k>=i;k--)
        {
            s[k+1]=s[k];
        }
        s[i]=temp;
        recurssive(i+1,s);
        // leftshift
        temp=s[i];
        for(k=i;k<j;k++)
        {
            s[k]=s[k+1];
        }
        s[j]=temp;
    }
    return;
}
int main()
{
    // std::cout<<"Hello World";
    string s;
    cin>>s;
    recurssive(0,s);

    return 0;
}