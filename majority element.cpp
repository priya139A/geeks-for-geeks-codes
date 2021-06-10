#include< bits/stdc++.h>
using namespace std;
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        unordered_map<int, int> freq;
        for(int i = 0; i < size; i++)
            freq[a[i]]++;
        int count = -1;
        for(auto i :freq)
        {
            if(i.second > size / 2)
            {
                count = i.first; 
            }
        }
        return count;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
