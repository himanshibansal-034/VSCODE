#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int max_cuts(int n,int a,int b,int c)
{
    if(n==0)
    return 0;
    if(n<1)
    return -1;
    int res=max(max_cuts(n-a,a,b,c),max(max_cuts(n-b,a,b,c),max_cuts(n-c,a,b,c)));
    if(res==-1)
    return res;
    else
    return res+1;
}
int main(){
    fast
    ll t;
    cin >> t;
    while(t--)
    {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        cout<<max_cuts(n,a,b,c)<<endl;
    }
    return 0;
}