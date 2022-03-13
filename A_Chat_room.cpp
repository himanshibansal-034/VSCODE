#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    string s,b="hello";
    cin>>s;
    int j=0,pass=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==b[j])
        {
            j++;
            pass++;
            if(pass==5)
            break;
        }
    }
    if(pass==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}