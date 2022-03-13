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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1="code";
	    string s2="chef";
        int a=0;
	    int b=0;
	    
	    for(int i=0; i<n; i++){
	        if(s.substr(i,4)==s1){
	            a=i;
	            break;
	        }
	    }	    
	     for(int i=0; i<n; i++){
	        if(s.substr(i,4)==s2){
	            b=i;
	            break;
	        }
	    }
	    if(a<b){
	        cout<<"AC"<<endl;
	    }
	    else{
	        cout<<"WA"<<endl;
	    }
    }
    return 0;
}