#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void cycle_detect(vector<int> adj[],vector<int> &indegree,int n)
{

   queue<int> q;
   vector<int> stk;
   for(int i=0;i<n;i++)
   {
      if(indegree[i]==0)
      q.push(i);
   }
  while(!q.empty())
  {
    int node=q.front();
    q.pop();
    stk.pb(node);
    for(auto it:adj[node])
    {
        indegree[it]--;
        if(indegree[it]==0){
            q.push(it);
        }
    }
  }
  for(int i=0;i<stk.size();i++)
  {
    cout<<stk[i]<<" ";
  }
  cout<<endl;
}
void detect(vector<int> adj[],int n)
{
    vector<int> indegree(n,0);
    for(int i=0;i<n;i++)
    {
        for(auto it:adj[i])
        {
            indegree[it]++;
        }
    }
    cycle_detect(adj,indegree,n);
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
        } 
        detect(adj,n);
    }
    return 0;
}