#include<bits/stdc++.h>
using namespace std;
bool stringSame(string str){
    int count=0;
    int n=str.length();
    for(int i=1;i<n;i++){
        if(str[i]!=str[0]){
            count++;
        }
    }
    if(count>0)
        return false;
    else
        return true;
}
int main(){
    string str;
    getline(cin,str);
    cout << str << endl;
    if(stringSame(str)==true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
