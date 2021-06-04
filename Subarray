/*****************************************************************************
 * Find if the array 2 is subarray of array1 */
 #include<bits/stdc++.h>
 using namespace std;
 bool issubset(int m,int n,int arr1[],int arr2[]){
    set<int>hashset;
    for(int i=0;i<m;i++){
        hashset.insert(arr1[i]);
    }
    for(int i=0;i<n;i++){
        if(hashset.find(arr2[i])==hashset.end()){
            return false;
        }
    }
    return true;
}
 int main(){
    int m,n,arr1[m],arr2[n],i,temp;
    cin >> m >> n;
    for(int i=0;i<m;i++){
        cin >> temp;
        arr1[i]=temp;
    }
    for(i=0;i<n;i++){
        cin >> temp;
        arr2[i]=temp;
    }
    if(issubset(m,n,arr1,arr2)){
        cout << "Array2 is subset of Array 1" << endl;
    }
    else{
        cout << "Not a subset of Array 1" << endl;
    }
 }
