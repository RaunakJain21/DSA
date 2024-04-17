// all subsets where one element can occur at max 2 times
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 void recurssive(int i, vector<int>&nums,vector<int>temp,vector<vector<int>> &ans)
    {
        if(i==nums.size()-1)
        {
            ans.push_back(temp);
            temp.push_back(nums[i]);
            ans.push_back(temp);
               temp.push_back(nums[i]);
            ans.push_back(temp);
            return;
        }
        recurssive(i+1,nums,temp,ans);
        temp.push_back(nums[i]);
        recurssive(i+1,nums,temp,ans);
         temp.push_back(nums[i]);
        recurssive(i+1,nums,temp,ans);
        return;
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
    
    vector<int>temp;
    // int i
        vector<vector<int>>ans;
        recurssive(0,nums,temp,ans);
        
        for(auto temp:ans)
        {
            for(auto i:temp)
            cout<<i<<" ";
            cout<<endl;
        }
        
    // std::cout<<"Hello World";

    return 0;
}