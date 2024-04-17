 #include<bits/stdc++.h>
using namespace std;
 class Solution
 {
 public:
    int space_optimised(int weight[], int value[], int n, int capacity)
    {
        vector<int> prev(capacity+1);
        vector<int> curr(capacity+1);
        int a,b,i,cap;
        for(i=0;i<=capacity;i++)
        {
            if(weight[0]<=i)
            prev[i]=value[0];
            else
            prev[i]=0;
        }
        for(i=1;i<n;i++)
        {
            for(cap=0;cap<=capacity;cap++)
            {
                a=0;
                // include
             if (weight[i] <= cap) {
             a = prev[cap-weight[i]] + value[i];
             }
             // exclude
            b = prev[cap];
            curr[cap] = max(a, b);
            }
            prev=curr;
        }
        return prev[capacity];
    }
    int tabulation(int weight[], int value[], int n, int capacity){
         vector<vector<int>> v(n, vector<int>(capacity+1, -1));
         int a,b,i,cap;
        for(i=0;i<=capacity;i++)
        {
            if(weight[0]<=i)
            v[0][i]=value[0];
            else
            v[0][i]=0;
        }
        for(i=1;i<n;i++)
        {
            for(cap=0;cap<=capacity;cap++)
            {
                a=0;
                // include
             if (weight[i] <= cap) {
             a = v[i-1][cap-weight[i]] + value[i];
             }
             // exclude
            b = v[i-1][cap];
            v[i][cap] = max(a, b);
            }
        }
        return v[n-1][capacity];
    }
   int dp(vector<vector<int>> &v, int weight[], int value[], int i, int capacity) {
    int a = 0, b, c;
    
    if (i == 0) {
        if (weight[i] <= capacity)
            return value[i];
        return 0;
    }
    if (v[i][capacity] != -1) {
        return v[i][capacity];
    }

    // include that weight
    if (weight[i] <= capacity) {
        a = dp(v, weight, value, i - 1, capacity - weight[i]) + value[i];
    }
    // exclude
    b = dp(v, weight, value, i - 1, capacity);
    v[i][capacity] = max(a, b);
    // cout<<v[i][capacity]<<endl;
    return v[i][capacity];
}

// Function to return max value that can be put in knapsack of capacity W.
int knapSack(int W, int wt[], int val[], int n) {
    // vector<vector<int>> v(n, vector<int>(W+1, -1));
    // int ans = dp(v, wt, val, n - 1, W);
    
    // tabulation
    // int ans=tabulation(wt,val,n,W);
    int ans=space_optimised(wt,val,n,W);
    return ans;
}
};
int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}