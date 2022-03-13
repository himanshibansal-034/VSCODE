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
        int n;
        cin>>n;
        vector<int> a(n),comp(n);
        int flag=1,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            comp[i]=sum;
        }
        int mini =sum;
        for(int i=0;i<n;i++)
        {
            mini=min(max(comp[i],(sum-comp[i])),mini);    
        }
        if(n==0)
            cout<<0<<endl;
        else
            cout<<mini<<endl;
    }
    return 0;
}