#include<bits/stdc++.h>
using namespace std;
bool check_sum(int arr[],int n,int k){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            if(k == arr[i]+arr[j])
                return true;
        }
    return false;
}
int main(){
    int n,arr[n],k;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> k;
    if(check_sum(arr,n,k)==true){
        cout << "True" ;
    }
    else
        cout << "False";
}
