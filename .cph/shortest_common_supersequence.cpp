#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int scs(string a,string b,int m,int n)
{
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++)
    dp[i][0]=0;
    for(int i=0;i<=n;i++)
    dp[0][i]=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i-1]==b[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    int ans=dp[m][n];
    return (m-ans)+(n-ans)+ans;
}
int main(){
    fast
    ll t;
    cin >> t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int m=a.size();
        int n=b.size();
        cout<<scs(a,b,m,n)<<endl;
    }
    return 0;
}