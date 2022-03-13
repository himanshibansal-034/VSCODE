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
        string s;
        cin>>s;
        if(n&1)
        {
           int j=s.size()-1;
           for(int i=0;i<n/2;i++)
           {
               if(s[j]==s[i])
               swap(s[j],s[j-1]);
               j--;
           }
           cout<<"YES"<<endl;
           cout<<s<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}