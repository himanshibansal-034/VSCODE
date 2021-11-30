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
        ll s,a,b,c;
        cin>>s>>a>>b>>c;
        float incr=float(s)*c/100;
        float stock=s+incr;
        if(stock>=a && stock<=b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}