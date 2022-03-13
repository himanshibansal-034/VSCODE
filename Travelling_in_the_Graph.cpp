#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void dfs(vector<int> adj[],vector<bool> &vis,int sv)
{
    vis[sv]=true;
    for(auto x:adj[sv])
    {
        if(!vis[x])
        dfs(adj,vis,x);
    }
}
int main(){
    fast
    ll t=1;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> adj[n];
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        vector<bool> vis(n,false);
        dfs(adj,vis,1);
        for(int i=1;i<=n;i++)
        {
            cout<<vis[i]<<" ";
        }
        cout<<endl;
        if(vis[n]==true)
        cout<<0<<endl;
        else{
            cout<<"none"<<endl;
        }
    }
    return 0;
}