#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void print_dfs(vector<int> adj[],int vis[],int n,int sv)
{
    cout<<sv<<endl;
    vis[sv]=1;
    for(int i=0;i<n;i++)
    {
        for(auto it:adj[sv])
        {
            if(!vis[it])
            print_dfs(adj,vis,n,it);
        }
    }
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
        int vis[n];
        for(int i=0;i<e;i++)
        {
            cin>>a>>b;
            adj[a].pb(b);          // 1-2  2-1
            adj[b].pb(a);
        }
        for(int i=0;i<n;i++)
           vis[i]=0;
        print_dfs(adj,vis,n,0);
    }
    return 0;
}
