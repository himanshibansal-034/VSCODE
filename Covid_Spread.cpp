#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        ll ans=1;
        int flag=1;
        for(ll i=1;i<=d;i++)
        {
            if(i<11)
            ans*=2;
            else
            ans*=3;
            if(ans>=n)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        cout<<ans<<endl;
        else
        cout<<n<<endl;
    }
    return 0;
}