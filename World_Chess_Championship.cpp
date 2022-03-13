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
        int x;
        cin>>x;
        string s;
        cin>>s;
        int carl=0,chef=0,draw=0;
        for(auto x:s)
        {
            if(x=='C')
            carl++;
            else if(x=='N')
            chef++;
            else
            draw++;
        }
        if(carl==0)
        {
            carl=1*draw;
            chef=2*chef;
        }
        else if(chef==0)
        {
           chef=1*draw;
           carl=2*carl;
        }
        
        if(carl>chef)
        cout<<x*60<<endl;
        else if(carl<chef)
        cout<<x*40<<endl;
        else
        cout<<x*55<<endl;
    }
    return 0;
}