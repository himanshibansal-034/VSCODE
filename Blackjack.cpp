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
        int a,b;
        cin>>a>>b;
        int rem=21-(b+a);
        if(rem>=1 && rem<=10)
        cout<<rem<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}