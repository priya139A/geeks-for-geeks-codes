#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};
void append(Node** head,int data){
    Node* new_node=new Node();
    Node* last=*head;
    new_node->data=data;
    new_node->next=NULL;
    if(last==NULL){
        *head=new_node;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=new_node;
    return;
}
void push(Node **head,int data){
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=(*head);
    (*head)=new_node;
}
void insertAfter(Node *prev_node,int data){
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}
void printlist(Node *node){
    while(node!=NULL){
        cout<<node->data <<" ";
        node=node->next;
    }
}
int main(){
    Node *head=NULL;
    int n,temp,t;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        append(&head,temp);
    }
    cout<< "used append function"<< endl;
    printlist(head);
    cout << endl;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> temp;
        push(&head,temp);
    }
    cout << "used push for 10,11,12,13,14" << endl;
    printlist(head);
    cout << endl;
    insertAfter(head,15);
    cout << "after inserting 15 after head" << endl;
    printlist(head);
    return 0;

}
