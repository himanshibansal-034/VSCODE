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
        int x,y;
        cin>>x>>y;
        if((x%2==0 && y%2==0) || (x%2!=0 && y%2!=0))
        cout<<"Janmansh"<<endl;
        else
        cout<<"Jay"<<endl;
    }
    return 0;
}