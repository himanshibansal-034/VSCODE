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
        string s;
        cin>>s;
        int zero=0,one=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            one++;
            else
            zero++;
        }
        if(one!=0 && zero!=0)
        {
           cout<<min(one,zero)-1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}