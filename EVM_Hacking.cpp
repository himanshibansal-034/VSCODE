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
        int a,p,b,q,c,r;
        cin>>a>>b>>c>>p>>q>>r;
        int req=(p+q+r)/2;
        int votes=max({a+b+r,a+c+q,b+c+p});
        if(votes>req)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}