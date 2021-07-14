// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
long long gcd(long long a,long long b){
    if( a == 0){
        return b;
    }
    else{
        return gcd(b % a,a);
    }
}
class Solution {
public:
    long long sum(long long N, long long M){
        long long k=gcd(N,M);
        long long sum=(N/k)+(M/k);
        return sum;
    }
};

// { Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        long long N, M;
        cin >> N >> M;
        Solution obj;
        cout << obj.sum(N, M) << "\n";
    }
}
  // } Driver Code Ends
