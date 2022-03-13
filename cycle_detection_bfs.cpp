#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
bool cycle_detect(vector<int> adj[],int vis[],int n,int sv,int par)
{
  vis[sv]=1;
  queue<pair<int,int>> q;
  q.push({sv,par});
  while(!q.empty())
  {
    int node=q.front().first;
    int parent=q.front().second;
    q.pop();
    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            vis[it]=1;
            q.push({it,node});
        }
        else if(parent!=it)
        return true;
    }
  }
  return false;
}
bool detect(vector<int> adj[],int n)
{
    int vis[n];
    for(int i=0;i<n;i++)
        vis[i]=0;
    
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            if(cycle_detect(adj,vis,n,i,-1))
            return true;
        }
    }
    return false;
}
int main(){
    fast
    ll t=1;
    cin >> t;
    while(t--)
    {
        int n,e,a,b;
        cin>>n>>e;
        vector<int> adj[n];       // vector<int> adj(n);
        
        for(int i=0;i<e;i++)
        {
            cin>>a>>b;
            adj[a].pb(b);          // 1-2  2-1
            adj[b].pb(a);
        } 
        if(detect(adj,n))
        cout<<"true"<<endl;
        else
        cout<<"false"<<endl;
    }
    return 0;
}