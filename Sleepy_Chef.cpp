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
         int count=0,ans=0;
	    
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='0')
	        {
	            count++;
	            if(count%k==0)
	            {
	                ans++;
	            }
	        }
	        else
	        {
	            count=0;
	        }
	    }
	    cout<<ans<<endl;
    }
    return 0;
}