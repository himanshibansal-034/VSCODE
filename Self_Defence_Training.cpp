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
        vector<int> a(n);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=10 && a[i]<=60)
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}