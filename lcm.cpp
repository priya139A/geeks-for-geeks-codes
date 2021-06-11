#include<bits/stdc++.h>
using namespace std;
int gcd(int num1,int num2){
    if( num1 == 0)
        return num2;
    else
        return gcd(num2 % num1,num1);
}
int lcm(int a,int b){
    int n=gcd(a,b);
    int res=(a*b)/n;
    return res;
}
int main(){
    int num1,num2;
    cin >> num1 >> num2;
    int res=lcm(num1,num2);
    cout << res << endl;
}
