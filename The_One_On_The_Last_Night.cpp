#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define int long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main(){
    fast
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,k,rem,cnt;
        cin>>n>>k;
        priority_queue<int,vector<int>,greater<int>> pq;
        while(n!=0)
        {
            rem=n%10;
            n/=10;
            pq.push(rem);
        }
        int min1;
        while(k!=0)
        {
            min1=pq.top();
            pq.pop();
            
            if(min1!=9)
            {
                min1++;
                pq.push(min1);
            }
            else{
                pq.push(min1);
            }
            k--;
        }
        cnt=1;
        while(!pq.empty())
        {
            cnt*=pq.top();
            pq.pop();

        }
        cout<<cnt<<endl;
    }
    return 0;
}