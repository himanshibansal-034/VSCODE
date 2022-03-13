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
        ll n,k=3;
        cin>>n;
        if(n==1)
        cout<<6<<endl;
        else
        {
           for(int i=0;i<n;i++)
           {
               cout<<k<<" ";
               k+=2;
           }
           cout<<endl;
        }
    }
    return 0;
}