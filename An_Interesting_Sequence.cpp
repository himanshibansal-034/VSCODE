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
        ll k,cnt=0;
        cin>>k;
        while(k%2==0)
        {
                cnt++;
                k/=2;
        }
        cout<<cnt<<endl;
    }
    return 0;
}