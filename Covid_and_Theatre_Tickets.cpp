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
        int n,m;
        cin>>n>>m;
        int seats=ceil((float)m/2);
        int rows=ceil((float)n/2);
        cout<<seats*rows<<endl;
    }
    return 0;
}
