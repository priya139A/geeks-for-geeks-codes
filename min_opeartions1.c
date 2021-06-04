/* Find min_operations to make all the elements same in array*/ 
 #include<bits/stdc++.h>
 using namespace std;
 int min_operations(int n,int arr[]){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int p=s.size();
    return (p-1) ;
 }
 int main(){
    int n,arr[n],i,temp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        arr[i]=temp;
    }
    temp=min_operations(n,arr);
    cout << temp << endl;
 }
 
