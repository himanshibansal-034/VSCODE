#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n%k==0)
        cout<<(n/k)<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}