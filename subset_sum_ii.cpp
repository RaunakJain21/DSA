#include <bits/stdc++.h>
using namespace std;
int recurssive(vector<int> &a,int i,int sum,vector<int> temp)
{
    int j;
    if(sum==0)
    {
        for(auto j:temp)
        cout<<j<<" ";
        cout<<endl;
    return 1;
    }
    if(sum<0)
    return 0;
    if(i==a.size())
    {
        if(sum==0)
        {
              for(auto j:temp)
        cout<<j<<" ";
        cout<<endl;
        return 1;
        }
        return 0;
    }
    int ans1=recurssive(a,i+1,sum,temp);
     temp.push_back(a[i]);
      int ans=recurssive(a,i,sum-a[i],temp);
    return ans+ans1;
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
     int n,i,sum;
      cin>>n;
    vector<int>nums(n);
    vector<int>temp;
    for(i=0;i<n;i++)
    {
    cin>>nums[i];
    }
    cin>>sum;
  recurssive(nums,0,sum,temp);

    return 0;
}