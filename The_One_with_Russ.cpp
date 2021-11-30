#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    int t=1;
    cin >> t;
    while(t--)
    {
        ll n,x,k,cnt=0;
        cin>>n>>x>>k;
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        for(ll i=0;i<n;i++)
        cin>>b[i];
        for(ll i=0;i<n;i++)
        {
            if(abs(a[i]-b[i])<=k)
            cnt++;
        }
        if(cnt>=x)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}