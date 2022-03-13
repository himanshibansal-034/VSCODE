#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
bool bfs(vector<int> adj[],int vis[],int n,int sv,int se)
{
    if(sv==se)
    return true;
    queue<int> q;
    q.push(sv);
    vis[sv]=1;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto it:adj[node])
        {
            if(it==se)
            return true;
            if(!vis[it])
            {
                vis[it]=1;
                q.push(it);  
            }
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
        int n,e,a,b,sv,se;
        cin>>n>>e>>sv>>se;
        vector<int> adj[n];       // vector<int> adj(n);
        int vis[n];
        for(int i=0;i<e;i++)
        {
            cin>>a>>b;
            adj[a].pb(b);          // 1-2  2-1
            adj[b].pb(a);
        }
        for(int i=0;i<n;i++)
           vis[i]=0;
        if(bfs(adj,vis,n,sv,se))
        cout<<"true"<<endl;
        else
        cout<<"false"<<endl;
    }
    return 0;
}