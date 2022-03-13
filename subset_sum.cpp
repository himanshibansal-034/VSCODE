#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int subset_sum(int arr[],int n,int sum)
{
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
    dp[i][0]=1;
    for(int i=1;i<=sum;i++)
    dp[0][i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
               dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            else
               dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}
int main(){
    fast
    ll t;
    cin >> t;
    while(t--)
    {
        int n,sum;
        cin>>n>>sum;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<subset_sum(arr,n,sum)<<endl;
    }
    return 0;
}