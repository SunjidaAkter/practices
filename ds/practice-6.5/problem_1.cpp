/*
Question: Take a singly linked list as input and print the size of the linked list.

Sample Input
2 1 5 3 4 8 9 -1
Sample Output
7
Sample Input
5 1 4 5 -1
Sample Output
4
*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};
void insert(Node* &head,int v){
    Node* newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
} 
int size(Node* head){
    Node* tmp=head;
    int count=0;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    return count;
}
int main(){
    Node* head=NULL;
    int v,cnt=0;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        insert(head,v);
    }
    cout<<size(head);
    return 0;
}