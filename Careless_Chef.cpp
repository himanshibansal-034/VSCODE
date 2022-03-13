#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    ll t=1;
    cin >> t;
    while(t--)
    {
        ll n,ans=0;
        int flag=0;
        cin>>n;
        ll b[n*2];
        for(ll i=0;i<n*2;i++)
        {
            cin>>b[i];
        }
        sort(b,b+n);
        for(ll i=0;i<n*2;i++)
        {
            if(abs(b[i])&1)
            ans+=0;
            else
            ans+=1;
        }
        if(ans&1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}