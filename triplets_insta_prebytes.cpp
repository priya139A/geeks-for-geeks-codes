#include<bits/stdc++.h>
using namespace std;
int findtriplet(int n,int arr[]){
    for(int i=0;i<=n-3;i++){
        if(arr[i] < arr [i+1] && arr[i+1] < arr[i+2]){
            return 1; 
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(findtriplet(n,arr) ==1){
        cout << "True" << endl;
    }
    else
        cout << "False" << endl;
    return 0;
}
