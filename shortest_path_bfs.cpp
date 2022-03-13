#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void bfs(vector<int> adj[],int n,int src)
{
    vector<int> dist(n,INT_MAX);
    queue<int> q;
    q.push(src);
    dist[src]=0;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto it:adj[node]){
            if(dist[it]>dist[node]+1)
            {
                dist[it]=dist[node]+1;
                q.push(it);
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<dist[i]<<" ";
    cout<<endl;
}
int main(){
    fast
    ll t=1;
    cin >> t;
    while(t--)
    {
        int n,e,a,b;
        cin>>n>>e;
        vector<int> adj[n];      
        for(int i=0;i<e;i++)
        {
            cin>>a>>b;
            adj[a].pb(b);          
            adj[b].pb(a);
        }
        bfs(adj,n,0);
    }
    return 0;
}