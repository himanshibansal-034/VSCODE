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
        int a,b,c;
        cin>>a>>b>>c;
        if(a>50)
        cout<<"A"<<endl;
        else if(b>50)
        cout<<"B"<<endl;
        else if(c>50)
        cout<<"C"<<endl;
        else
        cout<<"NOTA"<<endl;
    }
    return 0;
}