#include <bits/stdc++.h>
using namespace std;

int paths(int i,int j,int n,int desti,int destj,vector<vector<bool>>&mark)
{
    if(i==desti && j==destj)
    {
        mark[i][j]=1;
        cout<<"path"<<endl;
         for(auto arr:mark)
        {
            for(auto k:arr)
            {
                cout<<k<<" ";
            }
            cout<<endl;
        }
        return 1;
    }
    if(i>=n || j>=n || i<0 || j<0 || mark[i][j])
    return 0;
    mark[i][j]=true;
    int a=0;
   a+=paths(i+1,j,n,desti,destj,mark);
   a+=paths(i-1,j,n,desti,destj,mark);
   a+=paths(i,j+1,n,desti,destj,mark);
    a+=paths(i,j-1,n,desti,destj,mark);
    mark[i][j]=false;
    return a;
}
int main()
{
   
    int i,j,desti,destj,n;
    cin>>n;
    cin>>i>>j;
    cin>>desti>>destj;
     vector<vector<bool>>mark(n,vector<bool>(n,false));
    cout<<paths(i,j,n,desti,destj,mark);
    // std::cout<<"Hello World";

    return 0;
}