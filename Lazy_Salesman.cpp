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
        int n,w;
        cin>>n>>w;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a.rbegin(),a.rend());
        int sum=0,cnt=0;
        for(int i=0;i<n;i++)
        {
           if(sum<w)
           {
               sum+=a[i];
               cnt++;
           }
        }
        cout<<n-cnt<<endl;
    }
    return 0;
}