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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string  ans=s;
    int i=0,j=k-1,z=k-1;
    while(i<=j){
        if(i!=j){
            ans[z]=s[i];
            z--;
            ans[z]=s[j];          
            z--;
            i++;
            j--;
        }
        else{
            ans[z]=s[i];
            i++;
        }
    }

    cout<<ans<<"\n"; 
    }
    return 0;
}