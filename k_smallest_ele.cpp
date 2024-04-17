// unsorted array is given 
// we have to find kth smallest element
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int soe(int x,vector<int> &a)
{
    int i,c=0;
    for(auto i:a)
    {
        // if(i==)
        if(i<=x)
        c++;
    }
    return c++;
}
int main()
{
    int s,e,n,mid,ans,i,c,c1,k;
    cin>>n;
    vector<int>a(n);
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    s=min(s,a[i]);
    e=max(e,a[i]);
    }
    cin>>k;
    // s=0;
    // e=n;
    while(s<=e)
    {
        mid=(s+e)/2;
        c=soe(mid,a);
        if(c>=k)
        {
            c1=soe(mid-1,a);
            if(c1<k)
            {
                ans=mid;
                break;
            }
            else
            e=mid-1;
        }
        else
        s=mid+1;
    }
    cout<<ans;


    return 0;
}