#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long int
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    ll t=1;
    cin >> t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        for(ll i=1;i<n;i+=2)
        {
            sum+=((i^(i+1))<<1);
        }
        cout<<sum<<endl;
    }
    return 0;
}