#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    int n,cnt=0,ans=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr.begin(),arr.end());
    int sum=accumulate(arr.begin(),arr.end(),0);
    sum/=2;
    for(int i=n-1;i>=0;i--)
    {
        ans+=arr[i];
        cnt++;
       if(ans>sum)
       break;
    }
    cout<<cnt<<endl;
    return 0;
}