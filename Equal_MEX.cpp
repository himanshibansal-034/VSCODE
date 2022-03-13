#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(2*n);
        vector<int> freq(2*n,0);
        set<int> s1;
        for(int i=0;i<2*n;i++)
        {
            cin>>v[i];
            s1.insert(v[i]);
            freq[v[i]]++;
        }
        for(auto x:freq)
        cout<<x<<" ";
        cout<<endl;
        sort(v.begin(),v.end());
        int mex=0;
        for(int i=0;i<2*n;i++)
        {
            if(s1.find(i)==s1.end())
            {
                mex=i;
                break;
            }
        }
        cout<<mex<<endl;
        int flag=0;
        for(int i=0;i<freq.size();i++)
        {
            if(i>mex) 
            {
                if(freq[i]&1)
                {
                    flag=1;
                    break;
                }
            }

        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}