// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

class Solution{
    public:
    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<int,int>a;
        unordered_map<int,int>b;
        for(int i=0;i<N;i++){
            a[A[i]]++;
            b[B[i]]++;
        }
        for(auto x:a){
            if(a[x.first]!=b[x.first])
                return false;
        }
        return true;
    }
};

int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends
