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
        int n,x,sum=0,i=0,flag=0;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n,greater<>());
            for(i=0;i<n;i++)
            {
                sum+=a[i];
                if(sum>=x)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            cout<<i+1<<endl;
            else
            cout<<-1<<endl;
    }
    return 0;
}