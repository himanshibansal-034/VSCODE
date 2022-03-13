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
        string s;
        cin>>s;
        int red_key,green_key,blue_key,red,green,blue;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='r') red_key=i;
            else if(s[i]=='g') green_key=i;
            else if(s[i]=='b') blue_key=i;
            else if(s[i]=='R') red=i;
            else if(s[i]=='G') green=i;
            else   blue=i;
        }
        if(red_key<red && blue_key<blue && green_key<green)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}