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
void printnode(Node *head){
    while(head!=NULL){
        cout<< head->data <<" ";
        head=head->next;
    }
    cout << "\n";
}
int insertnode(Node *head,int k){
    struct Node *curr=head;
    if(curr==NULL){
        curr->data=k;
        printnode(curr);
        return 0;
    }
    /*else if(curr->data < k && curr->next==NULL){
        curr->next->data=k;
        curr->next->next=NULL;
        printnode(curr);
        return 0;
    }*/
    else if(curr->data > k){
        struct Node *temp=new Node(k);
        temp->next=curr;
        head=temp;
        printnode(head);
        return 0;
    }
    while(curr!=NULL){
        if(curr->data < k){
            struct Node *temp=new Node(k);
            if(curr->next!=NULL && curr->next->data >k){
                temp->next=curr->next;
                curr->next=temp;
                curr=head;
                printnode(curr);
                return 0;
            }
            else if(curr->next==NULL){
                curr->next=temp;
                temp->next=NULL;
                curr=head;
                printnode(curr);
                return 0;
            }
            curr=curr->next;
        }
        else
            curr=curr->next;
    }
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
    insertnode(head,k);
}
