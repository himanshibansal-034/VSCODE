#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

void cycle_detect(vector<int> adj[],vector<int> &vis,int sv,stack<int> &stk)
{
    vis[sv]=1;
    for(auto it:adj[sv])
    {
        if(!vis[it])
        {
           cycle_detect(adj,vis,it,stk);
        }
    }
    stk.push(sv);
}
vector<int> detect(vector<int> adj[],int n)
{
    vector<int> vis(n,0);
    stack<int> stk;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            cycle_detect(adj,vis,i,stk);
        }
    }
    while(!stk.empty())
    {
        ans.pb(stk.top());
        stk.pop();
    }
    return ans;
}
int main(){
    fast
    int t;
    cin >> t;
    while(t--)
    {
         int n,e;
        cin>>n>>e;
        vector<int> adj[n];       
        
        for(int i=0;i<e;i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].pb(b);         
        } 
        vector<int> topo;
        topo=detect(adj,n);
        for(int i=0;i<topo.size();i++)
        {
            cout<<topo[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}