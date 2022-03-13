#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef pair<int, int> pa;
void dijkstra(vector<pa> adj[],vector<int> &dist,int n,int src)
{
  priority_queue <pa, vector<pa>, greater<pa>> pq;  
  dist[src]=0;
  pq.push({0,src});
  while(!pq.empty())
  {
    int node=pq.top().second;
    pq.pop();
    for(auto it:adj[node])
    {
        if(dist[it.first]>dist[node]+it.second)
        {
            dist[it.first]=dist[node]+it.second;
            pq.push({dist[it.first],it.first});
        }
    }
  }
  for(int i=1;i<=n;i++)
  cout<<dist[i]<<" ";
  cout<<endl;
}
int main(){
    fast
    ll t=1;
    cin >> t;
    while(t--)
    {
        int n,e,a,b,wt;
        cin>>n>>e;
        vector<pa> adj[n+1];   
        vector<int> dist(n+1,INT_MAX);
        for(int i=0;i<e;i++)
        {
            cin>>a>>b>>wt;
            adj[a].pb({b,wt});
            adj[b].pb({a,wt});
        }
        dijkstra(adj,dist,n,1);
    }
    return 0;
}