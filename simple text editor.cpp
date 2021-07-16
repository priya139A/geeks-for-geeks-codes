#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<string>p;
    string s,w;
    int Q;
    cin >> Q;
    while(Q--){
        int temp;
        cin >> temp;
        if(temp==1){
            cin >> w;
            p.push(s);
            s=s+w;
        }
        else if(temp==2){
            int k;
            cin >> k;
            p.push(s);
            s.erase(s.size()-k);
        }
        else if(temp==3){
            int k;
            cin >> k;
            cout << s[k-1] << endl;
        }
        else if(temp==4){
            s=p.top();
            p.pop();  
        }
    }
    return 0;
}
