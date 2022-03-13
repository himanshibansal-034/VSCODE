#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    ll t=1;
    cin >> t;
    while(t--)
    {
        int n,k=0;
        cin>>n;
        int a[n];
        if(n==3)
        {
           cout<<3<<" "<<2<<" "<<1<<endl;
           cout<<1<<" "<<3<<" "<<2<<endl;
           cout<<3<<" "<<1<<" "<<2<<endl;
        }
        else{
            for(int i=n;i>=1;i--)
            {
                cout<<i<<" ";
                a[k]=i;
                k++;
            }
            cout<<endl;
            for(int i=0;i<n-1;i++)
            {
                int temp=a[n-1];
                for(int j=n-1;j>=1;j--)
                a[j]=a[j-1];
                a[0]=temp;
                for(int l=0;l<n;l++)
                {
                cout<<a[l]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}

// 4 3 2 1
// 1 4 3 2
// 2 1 4 3