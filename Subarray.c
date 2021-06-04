/*****************************************************************************
 * Find if the array 2 is subarray of array1 */
 #include<bits/stdc++.h>
 using namespace std;
 bool issubset(int m,int n,int arr1[],int arr2[]){
    unordered_set<int>s;
    for(int i=0;i<m;i++){
        s.insert(arr1[i]);
    }
    int p=s.size();
    for(int i=0;i<n;i++){
        s.insert(arr2[i]);
        }
    if(p==s.size()){
        return true;
    }
    else{
        return false;
    }
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
