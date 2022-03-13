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
        int n;
        cin>>n;
        float f=pow((0.143 * n),n);
        if(f-floor(f) < 0.5)
        cout<<floor(f)<<endl;
        else
        cout<<floor(f)+1<<endl;
    }
    return 0;
}