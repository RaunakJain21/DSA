 #include <iostream>
#include <bits/stdc++.h>
using namespace std;
 bool check(int gap,vector<int> a,int k)
    {
        int i,curr=a[0],c=1,n=a.size();
        for(i=1;i<n;i++)
        {
           if((curr+gap)<=a[i])
           {
               c++;
               curr=a[i];
           }
        }
          if(c==k)
        return true;
        return false;
    }
int main()
{
    int s=0,e,n,mid,ans,i;
    cin>>n;
    vector<int>a(n);
    e=n-1;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    cout<<check(2,a,3);
    // while (s<=e)
    // {
    //     mid=(s+e)/2;
    //     if(a[mid]==a[mid-1] || a[mid]==a[mid+1])
    //     {ans=a[mid];
    //     break;}
    //     if(a[mid]==mid)
    //     e=mid-1;
    //     else
    //     s=mid+1;
    //     /* code */
    // }
    cout<<ans;
    
  
    return 0;
}
