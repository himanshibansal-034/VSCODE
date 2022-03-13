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
        int sum=0;
        for(int i=0;i<n;)
        {
           if(s[i]==s[i+1])
           {
               i+=2;
               sum+=1;
           }
           else
           {
               sum++;
               i++;
           }
        }
        cout<<sum<<endl;
    }
    return 0;
}