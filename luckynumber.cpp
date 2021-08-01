#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp,sum=0,count=0;
    cin >> n;
    while(n!=0){
        temp=n%10;
        n=n/10;
        count++;
        if(temp%2!=0){
            sum=sum+pow(10,count-1);
        }
    }
    cout << sum << endl;
}
