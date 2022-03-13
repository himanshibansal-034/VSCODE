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
        int n,cnt=1;
        cin>>n;
        string s;
        cin>>s;
        if(n==2)
        {
            if(s[0]==s[1])
            cout<<1<<endl;
            else
            cout<<2<<endl;
        }
        else{
            for(int i=0;i<n-1;i++)
            {
               if(s[i]!=s[i+1])
               cnt++;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}