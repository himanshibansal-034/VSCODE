#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int maxsum(int arr[],int n)
{
    int dp[n];
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;i++)
      dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
    return dp[n-1];
}
int main(){
    fast
    ll t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<maxsum(arr,n)<<endl;
    }
    return 0;
}