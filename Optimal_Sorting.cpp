#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
bool sorted(ll a[],int n)
{
    for(ll i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        return false;
    }
    return true;
}
int main(){
    fast
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        if(sorted(a,n))
        cout<<0<<endl;
        else
        {
            sort(a,a+n);
            cout<<a[n-1]-a[0]<<endl;
        }
    }
    return 0;
}