#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    int n;
    cin>>n;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%77==0 || n%44==0 || n%447==0 || n%474==0 || n%744==0 || n%774==0 || n%747==0 || n%477==0 || n%444==0 || n%777==0)
    cout<<"YES"<<endl;
    else
    {
        int flag=0;
        while(n!=0)
        {
            int temp=n%10;
            if(temp!=4 && temp!=7)
            {
                flag=1;
                break;
            }
            n/=10;
        }
        if(flag==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}