#include <bits/stdc++.h>

using namespace std;
struct Queue{
    stack<long >s1;
    stack<long >s2;
    void enqueue(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void dequeue(){
        if(s1.empty()){
            cout << "queue is empty"<<  endl;
            exit(0);
        }
        s1.pop();
    }
    long printfront(){
        long x=s1.top();
        return x;
    }      
};
        

int main()
{
    Queue q;
    long n,temp;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp==1){
            long dup;
            cin >> dup;
            q.enqueue(dup);
        }
        else if(temp==2){
            q.dequeue();
        }
        else if(temp==3){
            cout << q.printfront() << endl;
        }
    }
    return 0;
}

