// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int recurssive(vector<int> &a,int i,int sum)
{
    if(i==a.size())
    {
        if(sum==0)
        return 1;
        return 0;
    }
      int ans=recurssive(a,i+1,sum-a[i])+recurssive(a,i+1,sum);

    return ans;
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
     int n,i,sum;
      cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
    cin>>nums[i];
    }
    cin>>sum;
    cout<<recurssive(nums,0,sum);

    return 0;
}