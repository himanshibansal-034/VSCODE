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
        ll n,x;
        cin>>n>>x;
        ll a=0,b=0;
        if(x%3==0)
        {
           a+=x/3;
        }
        else if(x%3==1)
        {
            a+=x/3+1;
            b=b+2;
        }
        else if(x%3==2)
        {
            a+=x/3+1;
            b=b+1;
        }
        if(a+b<=n)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<n-a-b<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }       
    }
    return 0;
}