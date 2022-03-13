#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int edit_distance(string a ,string b,int m,int n)
{
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++)
    dp[i][0]=i;
    for(int j=0;j<=n;j++)
    dp[0][j]=j;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i-1]==b[j-1])
              dp[i][j]=dp[i-1][j-1];     
            else
              dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
        }
    }
    return dp[m][n];
}
int main(){
    fast
    string a,b;
    cin>>a>>b;
    int m=a.size();
    int n=b.size();
    cout<<edit_distance(a,b,m,n);
    return 0;
}