#include <bits/stdc++.h>
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
}; 
class Queue {
public:
    Node* head;
    Node* tail;
    int sz;
    Queue() {
        // Implement the Constructor
        head=NULL;
        tail=NULL;
        sz=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return sz==0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        sz++;
        Node* newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }

    int dequeue() {
        // Implement the dequeue() function
        Node* deleteNode=head;
        if(head==NULL){
            return -1;
        }
        sz--;
        head=head->next;
        return deleteNode->val;
    }

    int front() {
        // Implement the front() function
        if(sz==0)return -1;
        else return head->val;
    }
};