#include<bits/stdc++.h>
using namespace std;

int duplicates(int n,int arr[]){
    map<int,int>mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    //cout << mp.size() << endl;
    map<int, int>::iterator itr;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        //cout << itr->first <<" "<< itr->second << endl;
        if(itr->second % 2 ==0){
          cout << itr->first << " ";
        }
    }
}
    
int main(){
    int n,arr[n],i,temp;
    cin >>n;
    for(i=0;i<n;i++){
        cin >> temp;
        arr[i]=temp;
    }
    temp=duplicates(n,arr);
    return 0;
}
