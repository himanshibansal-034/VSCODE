#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    ll d;
    cin>>d;
    if(d&1)
    cout<<-1<<endl;
    else{
        cout<<0<<" "<<(d/2)<<endl;
        cout<<(d/2)<<" "<<0<<endl;
        cout<<0<<" "<<-(d/2)<<endl;
        cout<<-(d/2)<<" "<<0<<endl;
    }
    return 0;
}