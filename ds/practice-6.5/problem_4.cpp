/*
Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.



Sample Input
10 20 30 -1
7
1 40
5 50
4 50
0 100
7 40
1 110
7 40
Sample Output
10 40 20 30
Invalid
10 40 20 30 50
100 10 40 20 30 50
Invalid
100 110 10 40 20 30 50
100 110 10 40 20 30 50 40


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
void insert_at_tail(Node* &head, int v){
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
void insert_at_position(Node* head,int pos,int v,int* flag){
    Node* newNode=new Node(v);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
        if(tmp==NULL){
            *flag=1;
            return;
        }
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void print_linked_list(Node* head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    while(true){
        int v;cin>>v;
        if(v==-1){
            break;
        }
        insert_at_tail(head,v);
    }
    int test;cin>>test;
    while(test--){
        int flag=0;
        int pos,v;cin>>pos>>v;
        insert_at_position(head,pos,v,&flag);
        if(flag==1){
            cout<<"Invalid"<<endl;;
        }else{
            print_linked_list(head);
        }
    }
    return 0;
}