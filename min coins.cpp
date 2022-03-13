#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define INF INT_MAX-1
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int min_coins(int coins[],int n,int value)
{
    int dp[n+1][value+1];
    for(int i=0;i<=n;i++)
    dp[i][0]=INF;
    for(int i=0;i<=value;i++)
    dp[0][i]=INF;
    for(int i=1;i<=value;i++)
    {
        if(i%coins[0]==0)
        dp[1][i]=i/coins[0];
        else
        dp[1][i]=INF;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=value;j++)
        {
            if(coins[i-1]<=j)
            dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][value];
}
int main(){
    fast
    ll t;
    cin >> t;
    while(t--)
    {
        int n,value;
        cin>>n>>value;
        int coins[n];
        for(int i=0;i<n;i++)
        cin>>coins[i];
        cout<<min_coins(coins,n,value);
    }
    return 0;
}