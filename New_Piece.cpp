#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    int t=1;
    cin >> t;
    while(t--)
    {
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        if(a==p && b==q)
        cout<<0<<endl;
        else if(((a+b)%2==0 && (p+q)%2==0) || ((a+b)%2!=0 && (p+q)%2!=0))
        cout<<2<<endl;
        else
        cout<<1<<endl;
    }
    return 0;
}