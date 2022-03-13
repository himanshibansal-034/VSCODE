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
        int n,one=0,zero=0;
        cin>>n;
        string s;
        cin>>s;
        if(n&1)
        cout<<"YES"<<endl;
        else{
            for(auto x:s)
            {
                if(x=='1') one++;
                else  zero++;
            }
            if((one%2==0 && zero%2==0) || (one==zero))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}