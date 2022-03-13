#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
bool isPalindrome(string s, int i, int j)
{
    while(i < j)
    {
      if(s[i] != s[j])
        return false;  
      i++;
      j--;
    }
    return true;
}
int minPalPartion(string s, int i, int j)
{
    if( i >= j || isPalindrome(s, i, j) )
      return 0;
    int ans = INT_MAX, count;
    for(int k = i; k < j; k++)
    {
      count = minPalPartion(s, i, k) +  minPalPartion(s, k + 1, j) + 1;
 
      ans = min(ans, count);
    }
    return ans;
}
int main(){
    fast
    ll t=1;
    cin >> t;
    while(t--)
    {
        string s;
        cin>>s;
        cout <<minPalPartion(s, 0, s.length() - 1) << endl;
    }
    return 0;
}