#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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
    while (s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]==a[mid-1] || a[mid]==a[mid+1])
        {ans=a[mid];
        break;}
        if(a[mid]==mid)
        e=mid-1;
        else
        s=mid+1;
        /* code */
    }
    cout<<ans;
    
  
    return 0;
}