#include <bits/stdc++.h>

using namespace std;
struct Queue{
    stack<int >s1;
    stack<int>s2;
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
    int dequeue(){
        if(s1.empty()){
            cout << "queue is empty"<<  endl;
            exit(0);
        }
        int x=s1.top();
        s1.pop();
        return x;
    }      
};
        

int main()
{
    Queue q;
    int n,temp;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> temp;
        q.enqueue(temp);
    }
    for(int i=0;i<n;i++){
        cout << q.dequeue() << " ";
    }
    return 0;
}
