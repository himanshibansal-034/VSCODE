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
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        int cnt=0,j=0,sum=0;
        int maxi=*max_element(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            if(a[i]==maxi)
            j=i;
            if(j>0)
            {
                sum+=a[i];
                cnt++;
            }
        }
    }
    return 0;
}