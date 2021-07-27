#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
int kthnode(Node *head,int k){
    struct Node *curr=head;
    for(int i=0;i<k;i++){
        curr=curr->next;
    }
    while(curr){
        head=head->next;
        curr=curr->next;
    }
    return head->data;
}
int countoflist(Node *head){
    struct Node *curr=head;
    int count=0;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    return count;
}
void printnode(Node *head){
    while(head!=NULL){
        cout<< head->data <<" ";
        head=head->next;
    }
    cout << "\n";
}
int main(){
    int k,n,data;
    cin >> n >> k;
    cin >> data;
    struct Node *head=new Node(data);
    struct Node *temp=head;
    for(int i=0;i<n-1;i++){
        cin >> data;
        temp->next=new Node(data);
        temp=temp->next;
    }
   // printnode(head);
    cout << kthnode(head,k) << endl;
}
