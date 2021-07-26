#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,arr[n];
    int i,j,temp,sum;
    cin >> n >> k;
    int N=n;
    for(i=0;i<n;i++){
        cin >> temp;
        arr[i]=temp;
    }
    if(k>N){
        cout << "INVALID"<< endl;
    }
    else{
        temp=INT_MIN;
        for(i=0;i<(N-k+1);i++){
            sum=0;
            for(j=i;j<k+i;j++){
                sum=sum+arr[j];
            }
            if(sum > temp){
                temp=sum;
            }
        }
        cout << temp << endl;
    }
}
