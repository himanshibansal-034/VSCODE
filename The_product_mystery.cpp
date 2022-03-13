#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
ll gcd(ll b,ll c)
{
    if (c == 0)
    return b;
    return gcd(c, b % c);
}
int main(){
    fast
    ll t=1;
    cin >> t;
    while(t--)
    {
        ll b,c;
        cin>>b>>c;
        ll lcm=(b/gcd(b,c))*c;
        cout<<lcm/b<<endl;
    }
    return 0;
}