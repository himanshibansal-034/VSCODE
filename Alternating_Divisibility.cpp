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
        int ans[n];
        int sum=1;
        if(n==1)
        cout<<sum<<endl;
        else{
            for(int i=0;i<n-1;i+=2)
            {
               ans[i]=sum;
               ans[i+1]=sum*2;
               sum+=2;
            }
            if(n&1){
                for(int i=0;i<n-1;i++)
                cout<<ans[i]<<" ";
                cout<<ans[n-2]+1;
            }
            else{
                for(int i=0;i<n;i++)
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}