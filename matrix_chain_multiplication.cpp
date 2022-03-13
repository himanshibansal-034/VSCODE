#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int matrix_chain_multiplication(int arr[],int n,int i,int j)
{
    if(i+1==j)
    return 0;
    int res=INT_MAX;
    for(int k=i+1;k<j;k++)
    {
       res=min(res,matrix_chain_multiplication(arr,n,i,k)+matrix_chain_multiplication(arr,n,k,j)+arr[i]*arr[j]*arr[k]);
    }
    return res;
}
int main(){
    fast
    ll t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<matrix_chain_multiplication(arr,n,0,n-1)<<endl;
    }
    return 0;
}