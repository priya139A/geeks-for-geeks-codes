/*Smallest element repeated exactly ‘k’ times (not limited to small range)*/
#include<bits/stdc++.h>
using namespace std;

int duplicates(int n,int k,int arr[]){
    map<int,int>mp;
    int temp=INT_MAX;
    //cout << k << endl;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    //cout << mp.size() << endl;
    map<int, int>::iterator itr;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        //cout << itr->first <<" "<< itr->second << endl;
        if(itr->second == k){
            if(itr->first < temp){
                temp=itr->first;
                cout << temp << " ";
            }
        }
    }
}
    
int main(){
    int n,k,i,temp;
    cin >> n >> k;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> temp;
        arr[i]=temp;
    }
    //cout << k << endl;
    temp=duplicates(n,k,arr);
    return 0;
}
