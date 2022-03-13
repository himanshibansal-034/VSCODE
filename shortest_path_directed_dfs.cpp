#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void path(vector<pair<int,int>> adj[],int n,int sv,stack<int> &topo)
{
  vector<int> dist(n,INT_MAX);
   dist[sv]=0;
   while(!topo.empty())
   {
    int node=topo.top();
    topo.pop();
    if(dist[node]!=INT_MAX)
    {
        for(auto it:adj[node])
        {
            if(dist[it.first]>dist[node]+it.second)
            dist[it.first]=dist[node]+it.second;
        }
    }
   }
   for(int i=0;i<n;i++)
   cout<<dist[i]<<" ";
   cout<<endl;
}
void cycle_detect(vector<pair<int,int>> adj[],vector<int> &vis,int sv,stack<int> &stk)
{
    vis[sv]=1;
    for(auto it:adj[sv])
    {
        if(!vis[it.first])
        {
           cycle_detect(adj,vis,it.first,stk);
        }
    }
    stk.push(sv);
}
stack<int> detect(vector<pair<int,int>> adj[],int n)
{
    vector<int> vis(n,0);
    stack<int> stk;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            cycle_detect(adj,vis,i,stk);
        }
    }
    return stk;
}
int main(){
    fast
    int t;
    cin >> t;
    while(t--)
    {
         int n,e;
        cin>>n>>e;
        vector<pair<int,int>> adj[n];       
        
        for(int i=0;i<e;i++)
        {
            int a,b,wt;
            cin>>a>>b>>wt;
            adj[a].pb({b,wt});         
        } 
        stack<int> topo;
        topo=detect(adj,n);
        path(adj,n,0,topo);
    }
    return 0;
}