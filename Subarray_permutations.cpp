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
        cin>>n>>k;
        if(n==1 && k==1)
            cout<<1<<endl;
        else
        {
            if(k<2||k>n)
                cout<<-1<<endl;
            else
            {
                int cnt=0;
                for(int i=0;i<k-1;i++)
                {
                    cout<<(i+1)<<" ";
                    cnt=i;
                }
                for(int i=0;i<n-cnt-1;i++)
                    cout<<(n-i)<<" ";
                cout<<endl;
            }
        }
    }
    return 0;
}