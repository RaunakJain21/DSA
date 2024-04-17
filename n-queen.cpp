#include <bits/stdc++.h>
using namespace std;
bool isSafe(int i,int j,int n,vector<vector<int>>&mark)
{
    int k,in,jn;
    for(k=0;k<n;k++)
    {
        if(mark[i][k]==1)
        return false;
         if(mark[k][j]==1)
        return false;
    }
    in=i;
    jn=j;
    while(in<n && jn<n)
    {
        if(mark[in][jn]==1)
        return false;
        in++;
        jn++;
    }
      in=i-1;
    jn=j-1;
    while(in>=0 && jn>=0)
    {
        if(mark[in][jn]==1)
        return false;
        in--;
        jn--;
    }
    in=i;
    jn=j;
     while(in>=0 && jn<n)
    {
        if(mark[in][jn]==1)
        return false;
        in--;
        jn++;
    }
    in=i;
    jn=j;
     while(in<n && jn>=0)
    {
        if(mark[in][jn]==1)
        return false;
        in++;
        jn--;
    }
    return true;
}
void nqueen(int i,int n,vector<vector<int>>&mark)
{
    // int j;
    if(i==n)
    {
        for(auto arr:mark)
        {
            for(auto k:arr)
            {
                if(k==1)
                {
                    cout<<"Q ";
                }
                else
                cout<<"0 ";
            }
            cout<<endl;
        }
    }
    int j,c=0;
    for(j=0;j<n;j++)
    {
        if(isSafe(i,j,n,mark))
        {
            // cout<<i<<" "<<j<<endl;
            mark[i][j]=1;
            nqueen(i+1,n,mark);
            mark[i][j]=0;
            c=1;
        }
    }
    if(c!=1)
    return;
}
int main()
{
    // std::cout<<"Hello World";
    int n=4;
    vector<vector<int>>mark(n,vector<int>(n,0));
    nqueen(0,n,mark);

    return 0;
}