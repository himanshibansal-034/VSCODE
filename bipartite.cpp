#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define int long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
bool bfs(int src, vector<int> adj[], int c[]) {
    queue<int>q;
    q.push(src); 
    c[src] = 1; 
    while(!q.empty()) {
        int node = q.front(); 
        q.pop();
        
        for(auto it : adj[node]) {
            if(c[it] == -1) {
                c[it] = 1 - c[node]; 
                q.push(it); 
            } else if(c[it] == c[node]) {
                return false; 
            }
        }
    }
    return true; 
}

bool cbipartite(vector<int> adj[], int n) {
    int c[n];
    memset(c, -1, sizeof c); 
    for(int i = 0;i<n;i++) {
        if(c[i] == -1) {
            if(!bfs(i, adj, c)) {
                return false;
            }
        }
    }
    return true; 
}

int32_t main(){
    fast
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> adj[n];
        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        if(cbipartite(adj, n)) 
           cout << "yes"<<endl; 
        
        else 
            cout << "No"<<endl; 
    }
    return 0;
}