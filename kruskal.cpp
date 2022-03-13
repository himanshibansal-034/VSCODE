#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define pa pair<int,int>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
struct node{
    int u;
    int v;
    int wgt;
};
node ar[100000];
int par[10001];
int findPar(int x)
{
   if(par[x]==-1) return x;
   return par[x]=findPar(par[x]);
}
void find_union(int a,int b)
{
  par[a]=b;
}
bool comp(node a,node b)
{
    if(a.wgt < b.wgt)
    return true;
    return false;
}
int main(){
    fast
    ll t=1;
    cin >> t;
    while(t--)
    {
        int n,e,a,b,w,sum=0;
        cin>>n>>e;
        for(int i=0;i<e;i++)
        {
            cin>>ar[i].u>>ar[i].v>>ar[i].wgt;
        }
        sort(ar,ar+e,comp);
        for(int i=1;i<=n;i++)
        par[i]=-1;
        for(int i=0;i<e;i++)
        {
            a=findPar(ar[i].u);
            b=findPar(ar[i].v);
            if(a!=b)
            {
                sum+=ar[i].wgt;
                find_union(a,b);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}