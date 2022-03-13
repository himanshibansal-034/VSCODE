#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    ll t;
    cin >> t;
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(y1==y2 && y1!=0 && y2!=0)
        cout<<float(abs(x2-x1))<<endl;
        else if(y2==y3 && y2!=0 && y3!=0)
        cout<<abs(x3-x2)<<endl;
        else if(y1==y3 && y1!=0 && y3!=0)
        cout<<abs(x3-x1)<<endl;
        else
        cout<<float(0)<<endl;
    }
    return 0;
}