#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define ll long long
#define float double
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 int binary_search(vector<int> &arr,int n,int key){
	//Implement binary search
	int s = 0;
	int e = n - 1;

	while(s<=e){
		int mid = (s+e)/2;

		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] > key){
			e = mid - 1;
		}
		else{

			s = mid + 1;
		}
	}
}
int main(){
    fast
    ll t=1;
   // cin >> t;
    //while(t--)
    //{
        vector<int> a={2, 30, 15, 10, 8, 25, 80};
        int n=7,profit=0;
        vector<int> copy;
        for(auto x:a)
        {
            copy.pb(x);
        }
        for(auto x:copy)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        sort(copy.begin(),copy.end());
        int min1=copy[0],min2=copy[1],max1=copy[n-1],max;
        int idx1=binary_search(a,n,min1);
        int idx2=binary_search(a,n,min2);
        cout<<min1<<" "<<min2<<" "<<idx1<<" "<<idx2<<endl;
        if(idx2<idx1)
        {
           max=*max_element(a.begin(),a.begin()+idx1);
           profit=max1-min1 + max-min2;
        }
        else if(idx2>idx1)
        {
           max=*max_element(a.begin(),a.begin()+idx2);
           profit=max1-min1 + max-min2;
        }
        else if(idx2-idx1==1)
        profit=max1-min1;
        
        cout<<profit<<endl;
    //}
    return 0;
}