/*****************************************************************************
 * delete the elements to make the array elements same */
 #include<bits/stdc++.h>
 using namespace std;
 
int min_delete(int arr[],int m){
    unordered_map<int, int>freq;
    for (int i = 0; i < m; i++)
        freq[arr[i]]++;
    int max_freq = INT_MIN;
    for (auto i = freq.begin(); i!= freq.end(); i++)
        max_freq = max(max_freq, i->second);
    return m- max_freq;
}
 int main(){
    int m,arr[m],i,temp;
    cin >> m ;
    for(int i=0;i<m;i++){
        cin >> temp;
        arr[i]=temp;
    }
    cout <<(min_delete(arr,m));
 }
