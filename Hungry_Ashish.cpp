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
        int x,y,z;
        cin>>x>>y>>z;
        if(x>=y)
        cout<<"PIZZA"<<endl;
        else if(x>=z)
        cout<<"BURGER"<<endl;
        else
        cout<<"NOTHING"<<endl;
    }
    return 0;
}