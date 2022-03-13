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
        ll x,a,b;
        cin>>x>>a>>b;
        if(x==1 && a==1 && b==1)
        cout<<1<<endl;
        else if(a==1)
        cout<<-1<<endl;
        else if(x%a==0) 
        {
            cout<<(x/a)*b<<endl;
        }
        else
        cout<<-1<<endl;
    }
    return 0;
}