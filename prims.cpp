#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef pair<int, int> pa;
void prims(vector<pa> adj[],int n)
{
  priority_queue <pa, vector<pa>, greater<pa>> pq;
  int key[n];
  int parent[n];
  bool mst[n];
  for(int i=0;i<n;i++)
  key[i]=INT_MAX, mst[i]=false;
  key[0]=0;
  parent[0]=-1;
  pq.push({0,0});
  for(int count=0;count<n-1;count++)
  {
      int u=pq.top().second;
      pq.pop();
      mst[u]=true;
      for(auto it:adj[u])
      {
        int v=it.first;
        int wgt=it.second;
        if(mst[v]==false && wgt<key[v])
        {
            parent[v]=u;
            pq.push({key[v],v});
            key[v]=wgt;
        }
      }
  }
  for(int i=1;i<n;i++)
   cout<<parent[i]<<" "<<i<<endl;
}
int main(){
    fast
    ll t=1;
    cin >> t;
    while(t--)
    {
        int n,e,a,b,wt;
        cin>>n>>e;
        vector<pa> adj[n];   
        for(int i=0;i<e;i++)
        {
            cin>>a>>b>>wt;
            adj[a].pb({b,wt});
            adj[b].pb({a,wt});
        }
        prims(adj,n);
    }
    return 0;
}