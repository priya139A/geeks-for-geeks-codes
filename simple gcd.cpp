#include<bits/stdc++.h>
using namespace std;
int gcd(int num1,int num2){
    if( num1 == 0)
        return num2;
    else
        return gcd(num2 % num1,num1);
}

int main(){
    int num1,num2;
    cin >> num1 >> num2;
    int res=gcd(num1,num2);
    cout << res << endl;
}
