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
        string s;
        cin>>s;
        int flag=0;
        for(ll i=0;i<s.size()-1;i++)
        {
            if((s[i]=='1' && (s[i+1]=='1'|| s[i+1]=='0')))
            {
                flag=1;
            }
        }
        if(flag)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}