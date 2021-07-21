#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Queue{
    struct Node *front;
    struct Node *rear;
};
struct Queue *creating_queue(){
    struct Queue *Q;
    struct Node *temp;
    Q=malloc(sizeof(struct Queue));
    if(!Q){
        return NULL;
    }
    temp=malloc(sizeof(struct Node));
    Q->front=Q->rear=NULL;
    return Q;
}
void enqueue(struct Queue *Q,int data){
    struct Node *temp;
    temp=malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    if(Q->rear==NULL){
        Q->front=Q->rear=temp;
    }
    Q->rear->next=temp;
    Q->rear=temp;
}
void dequeue(struct Queue *Q){
    struct Node *temp;
    if(Q->front == NULL){
        return;
    }
    temp=Q->front;
    Q->front=Q->front->next;
    if(Q->front==NULL){
        Q->rear=NULL;
    }
    free(temp);
}
void print_Queue(struct Queue *Q){
    struct Node *temp=Q->front;
    if(Q->front == NULL && Q->rear== NULL){
        printf("Queue is empty");
        return;
    }
    while(temp!=NULL){
        printf("%d",temp->data);
        printf(" ");
        temp=temp->next;
    }
}
int front_element(struct Queue *Q){
    return Q->front->data;
}
int rear_element(struct Queue *Q){
    return Q->rear->data;
}
int queue_size(struct Queue *Q){
    struct Node *temp=Q->front;
    int count=0;
    if(Q->front == NULL && Q->rear == NULL){
        return 0;
    }
    while(temp!=Q->rear){
        count++;
        temp=temp->next;
    }
    if(temp==Q->rear){
        count++;
    }
    return count;
}
int main(){
    struct Queue *Q;
    Q=creating_queue();
    enqueue(Q,1);
    enqueue(Q,2);
    enqueue(Q,4);
    printf("size of queue : %d",queue_size(Q));
    dequeue(Q);
    enqueue(Q,10);
    enqueue(Q,12);
    dequeue(Q);
    enqueue(Q,15);
    enqueue(Q,20);
    dequeue(Q);
    print_Queue(Q);
    printf("front element:%d \n ", front_element(Q));
    printf("rear element:%d \n",rear_element(Q));
    dequeue(Q);
    enqueue(Q,39);
    print_Queue(Q);
}
