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
        int n;
        cin>>n;
        if(n>=3)
            cout<<pow(3,(n-3))*10*(n-2)<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}