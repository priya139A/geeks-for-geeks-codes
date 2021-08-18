#include<bits/stdc++.h>
using namespace std;
int findnum(int n){
    if(n>=0 and n<=9){
        return n;
    }
    stack<int>s;
    for(int i=9;i>=2;i--){
        if(n>1){
            while(n%i==0){
                s.push(i);
                n=n/i;
            }
        }
    }
    if(n!=1)
        return -1;
    int k=0;
    while(!s.empty()){
        k=k*10+s.top();
        s.pop();
    }
    return k;
}
int main()
{
    int n;
    cin >> n;
    cout << findnum(n) << endl;
    return 0;
}
