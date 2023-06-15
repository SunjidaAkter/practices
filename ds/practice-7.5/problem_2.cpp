/*
Question: Take a singly linked list as input and print the reverse of the linked list.

Sample Input
5 4 8 6 2 1 -1
Sample Output
1 2 6 8 4 5


Sample Input
1 2 3 4 -1
Sample Output
4 3 2 1

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
void insert_at_tail(Node* &head, Node* &tail,int v){
    Node* newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void reversed_linked_list(Node* head){
    Node* tmp=head;
    if(tmp==NULL)return;
    reversed_linked_list(tmp->next);
    cout<<tmp->val<<" ";
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    while(true){
        int v;cin>>v;
        if(v==-1){
            break;
        }
        insert_at_tail(head,tail,v);
    }
    reversed_linked_list(head);
    return 0;
}