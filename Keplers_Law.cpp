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
        int t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        float c1=(float)(t1*t1)/(r1*r1*r1);
        float c2=(float)(t2*t2)/(r2*r2*r2);
        if(c1==c2)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}