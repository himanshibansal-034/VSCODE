#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
bool cycle_detect(vector<int> adj[],int vis[],int dfsvis[],int n,int sv)
{
    vis[sv]=1;
    dfsvis[sv]=1;
    for(auto it:adj[sv])
    {
        if(!vis[it])
        {
           if(cycle_detect(adj,vis,dfsvis,n,it))
            return true;
        }
        else if(dfsvis[it]==1 && vis[it]==1)
           return true;
    }
    dfsvis[sv]=0;
   return false;
}
bool detect(vector<int> adj[],int n)
{
    int vis[n],dfsvis[n];
    for(int i=0;i<n;i++)
        vis[i]=0;
    for(int i=0;i<n;i++)
        dfsvis[i]=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            if(cycle_detect(adj,vis,dfsvis,n,i))
              return true;
        }
    }
    return false;
}
int main(){
    fast
    ll t;
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
        if(detect(adj,n))
        cout<<"true"<<endl;
        else
        cout<<"false"<<endl;
    }
    return 0;
}