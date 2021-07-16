#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    
    Node(int x){
        data=x;
        next=NULL;
        
    }
};
void printnode(Node *head){
    while(head!=NULL){
        cout<< head->data <<" ";
        head=head->next;
    }
    cout << "\n";
}
int getmiddle(Node *head){
    struct Node *first=head;
    struct Node *second=head;
    if(head!=NULL){
        while(first!=NULL && first->next != NULL){
            first=first->next->next;
            second=second->next;
        }
    }
    return second->data;
}
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int data;
        cin >> data;
        struct Node *head=new Node(data);
        struct Node *temp=head;
        for(int i=0;i<n-1;i++){
            cin >> data;
            temp->next=new Node(data);
            temp=temp->next;
        }
        printnode(head);
        cout << getmiddle(head) << endl;
    }
    
}
