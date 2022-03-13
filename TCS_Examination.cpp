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
        int dsa1,toc1,dm1,dsa2,toc2,dm2;
        cin>>dsa1>>toc1>>dm1>>dsa2>>toc2>>dm2;
        int dragon=dsa1+toc1+dm1;
        int sloth=dsa2+toc2+dm2;
        if(dragon>sloth)
        cout<<"DRAGON"<<endl;
        else if(dragon<sloth)
        cout<<"SLOTH"<<endl;
        else
        {
            if(dsa1>dsa2)
             cout<<"DRAGON"<<endl;
            else if(dsa1<dsa2)
             cout<<"SLOTH"<<endl;
            else{
                if(toc1>toc2)
                  cout<<"DRAGON"<<endl;
                else if(toc1<toc2)
                  cout<<"SLOTH"<<endl;
                else
                cout<<"TIE"<<endl;
            }
        }
    }
    return 0;
}