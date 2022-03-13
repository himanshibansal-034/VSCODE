#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int lcs_recursion(string s1,string s2,int m,int n)
{
    if(m==0 || n==0)
    return 0;
    if(s1[m-1]==s2[n-1])
    return 1+lcs_recursion(s1,s2,m-1,n-1);
    else
    return max(lcs_recursion(s1,s2,m-1,n),lcs_recursion(s1,s2,m,n-1));
}
int main(){
    fast
    string s1,s2;
    cin>>s1>>s2;
    int m=s1.size();
    int n=s2.size();
    cout<<lcs_recursion(s1,s2,m,n)<<endl;
    return 0;
}