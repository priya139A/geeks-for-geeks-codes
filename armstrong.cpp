#include <bits/stdc++.h>
using namespace std;
int order(int n){
    int k=0;
    while(n){
        k++;
        n=n/10;
    }
    return k;
}
bool isArmstrong(int n){
    int k=order(n);
    int temp=n,sum=0;
    while(temp){
        int x=temp%10;
        x=pow(x,k);
        sum=sum+x;
        temp=temp/10;
    }
    return (sum==n);
}
int main() {
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        if(isArmstrong(n)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
