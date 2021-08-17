#include<bits/stdc++.h>
using namespace std;
int maxdivide(int a,int b){
    while(a%b==0){
        a=a/b;
    }
    return a;
}
int getugly(int n){
    n=maxdivide(n,2);
    n=maxdivide(n,3);
    n=maxdivide(n,5);
    if(n==1){
        return 1;
    }
    else
        return 0;
}
int main(){
    int n;
    cin >>n;
    cout << 1 <<" ";
    for(int i=2;i<=n;i++){
        if(getugly(i)==1){
            cout << i << " ";
        }
    }
}
