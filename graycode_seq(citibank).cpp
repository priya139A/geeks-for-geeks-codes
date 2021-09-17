#include<bits/stdc++.h>
using namespace std;

int graycode_seq(int a,int b){
    int diff=0;
    while(a >0 && b>0){
        if(a&1 != b&1){
            diff++;
        }
        a=a>>1;
        b=b>>1;
    }
    if(a>0 || b>0){
        return diff==0;
    }
    return diff==1;
}
int main(){
    int a,b;
    cin >>a;
    cin >>b;
    if(graycode_seq(a,b)){
        cout << "yes" << endl;
    }
    else
        cout << "no" << endl;
}
