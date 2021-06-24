// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}// } Driver Code Ends

int search_2(vector<int>arr, int l, int h, int key){
    
    if (l > h)
        return -1;
 
    int mid = (l + h) / 2;
    if (arr[mid] == key)
        return mid;
    if (arr[l] <= arr[mid]) {
        if (key >= arr[l] && key <= arr[mid])
            return search_2(arr, l, mid - 1, key);
        return search_2(arr, mid + 1, h, key);
    }
    if (key >= arr[mid] && key <= arr[h])
        return search_2(arr, mid + 1, h, key);
 
    return search_2(arr, l, mid - 1, key);
}
 
int Search(vector<int> vec, int K) {
    int low=0,high=vec.size()-1;
    if (low > high)
        return -1;
    int mid = low + (high-low) / 2;
    if (vec[mid] == K)
        return mid;

    if (vec[low] <= vec[mid]) {
        if (K >= vec[low] && K <= vec[mid])
            return search_2(vec, low, mid - 1, K);
        return search_2(vec, mid + 1, high, K);
    }
    if (K >= vec[mid] && K <= vec[high])
        return search_2(vec, mid + 1, high, K);
 
    return search_2(vec, low, mid - 1, K);
}
