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
        vector<pair<int,int>> v;
        set<int> a1,a2;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            v.pb({x,y});
            a1.insert(x);
            a2.insert(y);
        }
        cout<<a1.size()+a2.size()<<endl;
    }
    return 0;
}