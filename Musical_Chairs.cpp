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
        ll cnt=0;
        ll n;
        cin>>n;
        n--;
        for(ll i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                ++cnt;
                else
                cnt+=2;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}