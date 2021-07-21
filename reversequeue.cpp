#include <bits/stdc++.h>

using namespace std;
void print(queue<int>& Queue){
    while(!Queue.empty()){
        cout << Queue.front() << " ";
        Queue.pop();
    }
}
void reverseQueue(queue<int> &Queue){
    stack<int> Stack;
    while(!Queue.empty()){
        Stack.push(Queue.front());
        Queue.pop();
    }
    while(!Stack.empty()){
        Queue.push(Stack.top());
        Stack.pop();
    }
}

int main()
{
    queue<int>Queue;
    Queue.push(11);
    Queue.push(22);
    Queue.push(33);
    Queue.push(44);
    Queue.push(55);
    Queue.push(66);
    Queue.push(77);
    Queue.push(88);
    Queue.push(99);
    Queue.push(110);
    reverseQueue(Queue);
    print(Queue);
    return 0;
}
