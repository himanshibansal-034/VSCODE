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
    memset(dp,-1,sizeof(dp));
    if(m==0)
      return n;
    if(n==0)
    return m;
    if(dp[m][n]!=-1)
      return dp[m][n];
    if(a[m-1]==b[n-1])
    dp[m][n]=edit_distance(a,b,m-1,n-1);     
    else
    dp[m][n]=1+min(edit_distance(a,b,m-1,n-1),min(edit_distance(a,b,m,n-1),edit_distance(a,b,m-1,n)));
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