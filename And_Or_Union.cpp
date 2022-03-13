#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define int long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main(){
    fast
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int a[n];
        int ans[33]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            for(int j=0;j<33;j++)
            {
               k=a[i]>>j;
               if(k&1)
               {
                   ans[j]++;
               }
            }
        }
        int res=0;
        for(int i=0;i<33;i++)
        {
            if(ans[i]>1)
            {
                res+=pow(2,i);
            }
        }
        cout<<res<<endl;
        }
    return 0;
}