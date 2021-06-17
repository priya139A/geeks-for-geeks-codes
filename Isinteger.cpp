#include<bits/stdc++.h>
using namespace std;
bool isNumber(string str){
    int n=str.length();
    for(int i=1;i<n;i++)
        if(isdigit(str[i])==false){
            return false;
        }
    return true;
}
int main(){
    string str;
    getline(cin,str);
    if(isNumber(str)==true)
        cout << "Integer" << endl;
    else
        cout << "String" << endl;
}
