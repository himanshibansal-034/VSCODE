#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
vector<int> print_dfs(vector<int> adj[],int vis[],int n,int sv,int se)
{
    vis[sv]=1;
    if(sv==se)
    {
        vector<int> temp;
        temp.pb(sv);
        return temp;
    }
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        for(auto it:adj[sv])
        {
            if(it==sv)
            continue;
            if(!vis[it])
            ans=print_dfs(adj,vis,n,it,se);
            if(!ans.empty())
            {
                ans.pb(sv);
                return ans;
            }
        }
    }
    return ans;
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
           vector<int> getpath;
        getpath=print_dfs(adj,vis,n,sv,se);
        for(int i=0;i<getpath.size();i++)
        cout<<getpath[i]<<" ";
        cout<<endl;
    }
    return 0;
}
