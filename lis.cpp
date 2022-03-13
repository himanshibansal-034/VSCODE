#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    ll t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int lis[n];
        for(int i=0;i<n;i++)
        lis[i]=0;
        lis[0]=1;
        for(int i=1;i<n;i++)
        {
          lis[i]=1;
          for(int j=0;j<i;j++)
          {
              if(a[i]>a[j]&&lis[i]<lis[j]+1)
              lis[i]=lis[j]+1;
          }
        }
       int max=0;
      for(int i=0;i<n;i++)
      {
          if(max<lis[i])
          max=lis[i];
      }
        cout<<max<<endl;
    }
    return 0;
}
