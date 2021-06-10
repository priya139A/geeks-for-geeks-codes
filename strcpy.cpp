#include <bits/stdc++.h>

using namespace std;
int copystring(string str1,string str2){
    int i=0;
    for(i=0;str2[i]!='\0';i++){
        str1[i]=str2[i];
    }
    str1[i]='\0';
    cout << str1 << endl;
}

int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    cout << str1<< endl;
    cout << str2 << endl;
    copystring(str1,str2);
    return 0;
}
