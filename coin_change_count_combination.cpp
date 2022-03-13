#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int coin_change(vector<int> coins,int n,int sum)
{
    if(sum==0 || n==0)
    return 0;
    int cnt=coin_change(coins,n-1,sum);
    if(coins[n-1]<=sum)
    {
       cnt= cnt+coin_change(coins,n,sum-coins[n-1]);
    }
    return cnt;
}
int main(){
    fast
    int n,sum;
    cin>>n>>sum;
    vector<int> coins;
    for(int i=0;i<n;i++)
    cin>>coins[i];
    cout<<coin_change(coins,n,sum)<<endl;
    return 0;
}