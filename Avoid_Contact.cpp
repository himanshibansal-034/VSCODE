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
        int noninfected=x-y;
        if(x!=y)
        cout<<2*y + noninfected<<endl;
        else
        cout<<2*y-1<<endl;
    }
    return 0;
}