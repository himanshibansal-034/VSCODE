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
        int n,x,y,ans=0;
        cin>>n>>x>>y;
        int bus=(n/100) + 1;
        int car=(n/4) + 1;
        while(n>0)
        {
            if(n>=100)
            {
                n=n-100;
                ans+=x;
            }
            else
            {
                n=n-4;
                ans+=y;
            }
        }
        cout<<min({car*y,bus*x,ans})<<endl;
    }
    return 0;
}