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
        if(n<3)
        {
            cout<<"-1"<<endl;
            continue;
        }
        if(n%2==1)
        {
            for(int i=1;i<=n;i++)
                cout<<i<<" ";
            cout<<endl;
            continue;
        }
        if(n%2==0)
        {
            cout<<"2 3 1 4 ";
            for(int i=5;i<=n;i++)
                cout<<i<<" ";
        }
    }
    return 0;
}