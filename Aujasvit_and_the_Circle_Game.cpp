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
        ll m,x;
        cin>>m>>x;
        if(m==2)
        {
            for(ll i=1;i<=x;i++)
            cout<<1<<" ";
            cout<<endl;
        }
        else if(m%2!=0)
        {
            if(x<m)
            {
                for(ll i=1;i<=x;i++)
                cout<<i<<" ";
                cout<<endl;
            }
            else
            {
                for(ll i=1;i<m;i++)
                cout<<i<<" ";
                for(ll i=m;i<=x;i++)
                cout<<m-1<<" ";
                cout<<endl;
            }
        }
        else if(m%2==0 && m!=2)
        {
            if(x<=m-2)
            {
                for(ll i=1;i<=x;i++)
                cout<<i<<" ";
                cout<<endl;
            }
            else
            {
               for(ll i=1;i<=m-2;i++)
                cout<<1<<" ";
                for(ll i=m-1;i<=x;i++)
                cout<<2<<" ";
                cout<<endl;
            }
        }
    }
    return 0;
}