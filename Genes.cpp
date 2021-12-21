#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    char a,b;
    cin>>a>>b;
    if(a=='R' || b=='R')
    cout<<"R"<<endl;
    else if(a=='B' || b=='B')
    cout<<"B"<<endl;
    else
    cout<<"G"<<endl;
    return 0;
}