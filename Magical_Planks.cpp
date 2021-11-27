#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(ll i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                cnt++;
            }
        }
        if(cnt>1)
        cout<<cnt-1<<endl;
        else if(cnt==1)
        cout<<1<<endl;
        else
        cout<<0<<endl;
    }
    return 0;
}