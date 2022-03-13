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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>=b)
        b+=c;
        else
        a+=c;
        if(a>=b)
        b+=d;
        else
        a+=d;
        if(a>=b)
        cout<<"N"<<endl;
        else
        cout<<"S"<<endl;
    }
    return 0;
}