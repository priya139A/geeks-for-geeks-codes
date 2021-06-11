#include<bits/stdc++.h>
using namespace std;
int gcd(int num1,int num2){
    if( num1 == 0)
        return num2;
    else
        return gcd(num2 % num1,num1);
}
int commonfactors(int a,int b){
    int n=gcd(a,b);
    int res=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n % i ==0){
            cout << i << " ";
            if( n / i ==i)
                res+=1;
            else
                res=res+2;
        }
    }
    cout << endl;
    return res;
}
int main(){
    int num1,num2;
    cin >> num1 >> num2;
    int res=commonfactors(num1,num2);
    cout << res << endl;
}
