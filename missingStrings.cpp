#include<bits/stdc++.h>
using namespace std;

string missingStrings(string str){
    vector<bool>mark(26,false);
    int index;
    for(int i=0;i < str.length();i++){
        if('A' <= str[i] && str[i] <= 'Z' )
        {
            index=str[i]- 'A';
        }
        else if( 'a' <= str[i] && str[i] <= 'z'){
            index=str[i]- 'a';
        }
        else
        {
            continue;
        }
        mark[index]=true;
    }
    string res="";
    for(int i=0;i<26;i++){
        if(mark[i] == false){
            res.push_back((char)+(i+'a'));
        }
    }
    return res;
    
}
    
int main(){
    string str;
    getline(cin,str);
    cout << str << endl;
    cout << missingStrings(str) << endl;
    return (0);
}
