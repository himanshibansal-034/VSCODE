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
        float x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        if(y1/x1 == y2/x2)
        cout<<0<<endl;
        else if(y1/x1 < y2/x2)
        cout<<-1<<endl;
        else
        cout<<1<<endl;
    }
    return 0;
}