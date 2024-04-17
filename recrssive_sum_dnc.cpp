#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 int recurssive(vector<int>&a,int s,int e)
    {
        if(s==e)
        return a[s];
        else if(s<e)
        {
            int mid=(s+e)/2;
            int ans=recurssive(a,s,mid)+recurssive(a,mid+1,e);
            return ans;
        }
        else
        return 0;
    }
  

int main()
{
    int n,i;
      cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
    cin>>nums[i];
    }
    cout<<recurssive(nums,0,n-1);
    

    return 0;
}