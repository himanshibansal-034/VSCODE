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
        int n,cnt=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        for(int i=0;i<n;i++)
        {
            int temp=1+i+cnt;
            if(v[i] == temp)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}