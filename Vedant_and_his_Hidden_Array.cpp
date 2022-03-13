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
        ll n,a;
        cin>>n>>a;
        if(n==1)
        {
            if(a%2==0)
            cout<<"Even"<<endl;
            else
            cout<<"Odd"<<endl;
            continue;
        }
        if(a%2!=0)
        {
            if(n%2==0)
            cout<<"Even"<<endl;
            else
            cout<<"Odd"<<endl;
        }
        else
        cout<<"Impossible"<<endl;
    }
    return 0;
}