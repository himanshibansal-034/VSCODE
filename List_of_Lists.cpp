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
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> freq(n);
        //int flag=0;
        for(ll i=0;i<n;i++)
        {
           cin>>a[i];
           freq[a[i]]++; 
        }
        if(n==1)
        cout<<0<<endl;
        else
        {
            int flag=0;
            for(ll i=0;i<freq.size();i++)
            {
                if(freq[i]>=2)
                {
                    flag=1;
                }
            }
            if(flag)
            cout<<n-1<<endl;
            else
            cout<<-1<<endl;
        }
    }
    return 0;
}