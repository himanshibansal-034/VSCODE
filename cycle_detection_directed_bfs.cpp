#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool detect(vector<int> adj[],int n)
{
    vector<int> indegree(n,0);
    for(int i=0;i<n;i++)
    {
        for(auto it:adj[i])
        {
            indegree[it]++;
        }
    }
    queue<int> q;
   int cnt=0;
   for(int i=0;i<n;i++)
   {
      if(indegree[i]==0)
      q.push(i);
   }
  while(!q.empty())
  {
    int node=q.front();
    q.pop();
    cnt++;
    for(auto it:adj[node])
    {
        indegree[it]--;
        if(indegree[it]==0){
            q.push(it);
        }
    }
  }
  if(cnt!=n) return true;
  else  return false;
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
        if(detect(adj,n))
        cout<<"true"<<endl;
        else
        cout<<"false"<<endl;
    }
    return 0;
}