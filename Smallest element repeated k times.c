#include <bits/stdc++.h>

using namespace std;

int small_element(int n,int k,int arr[]){
    map<int, int>mp;
    int temp=INT_MAX;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    map<int,int>::iterator itr;
    for(auto itr=mp.begin();itr!= mp.end;itr++){
        if(itr->second == k and itr->first < temp){
            temp=itr->first;
        }
    }
    cout << temp << endl;
    return 0;
}
int main(){
    int n,k,i,temp;
    cin >>n >>k;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> temp;
        arr[i]=temp; 
    }
    temp=small_element(n,k,arr);
    return 0;
