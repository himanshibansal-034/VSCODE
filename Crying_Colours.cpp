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
        int b[3][3];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
               cin>>b[i][j];
        }
        if(b[0][0]==n && b[1][1]==n && b[2][2]==n)
          cout<<0<<endl;
        else
        {
          int m1=b[1][0]+b[2][0]+b[2][1];
          int m2=b[0][1]+b[0][2]+b[1][2];
          cout<<max(m1,m2)<<endl;
        }
    }
    return 0;
}