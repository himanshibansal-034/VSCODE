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
        long long int x,z=1;
	    cin>>x;
	    long long int a=0,b=x;
	    for(long long int i=0;i<31;i++)
	    {
	        if(!(x&(z<<i)))
	        {
	            x=x|(z<<i);
	            break;
	        }
	    }
	    cout<<a<<" "<<b<<" "<<x<<endl;
    }
    return 0;
}