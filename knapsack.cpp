#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int knapsack(int val[],int wt[],int sum,int n)
{
    if(n==0 || sum==0)
    return 0;
    if(wt[n-1]<=sum)
    return max(val[n-1]+knapsack(val,wt,sum-wt[n-1],n-1),knapsack(val,wt,sum,n-1));
    else
    return knapsack(val,wt,sum,n-1);
}
int main(){
    fast
    ll t;
    cin >> t;
    while(t--)
    {
        int n,sum;
        cin>>n;
        int val[n];
        int wt[n];
        for(int i=0;i<n;i++)
        cin>>val[i];
        for(int i=0;i<n;i++)
        cin>>wt[i];
        cout<<knapsack(val,wt,sum,n)<<endl;
    }
    return 0;
}