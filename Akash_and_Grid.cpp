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
        int n,x,y;
        cin>>n>>x>>y;
        int c1=(n+1)/2;
        int c2=(n+1)/2;
        int p1=x+c1;
        int p2=y+c2;
        if((p1%2==0 && p2%2==0) || (p1%2!=0 && p2%2!=0))
        cout<<0<<endl;
        else
        cout<<1<<endl;
    }
    return 0;
}