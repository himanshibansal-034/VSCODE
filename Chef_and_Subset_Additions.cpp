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
        int n,x,y,flag=0;
        cin>>n>>x>>y;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        for(int i=0;i<n;i++)
        {
            if(b[i]-a[i]==x || b[i]-a[i]==y)
            {
                flag=0;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
    return 0;
}