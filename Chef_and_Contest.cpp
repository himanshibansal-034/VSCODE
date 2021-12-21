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
        ll x,y,p,q;
        cin>>x>>y>>p>>q;
        ll chef=x+p*10;
        ll chefina=y+q*10;
        if(chef<chefina)
        cout<<"Chef"<<endl;
        else if(chef>chefina)
        cout<<"Chefina"<<endl;
        else
        cout<<"Draw"<<endl;
    }
    return 0;
}