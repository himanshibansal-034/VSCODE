#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    int n,m,i;
    cin>>n>>m;
    if (n > m) {
        i = m;
    } else {
        i = n;
    }
    if(i&1)
    cout<<"Akshat"<<endl;
    else
    cout<<"Malvika"<<endl;
    return 0;
}