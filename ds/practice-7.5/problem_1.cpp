/*
Question: Take two singly linked lists as input and check if their sizes are same or not.

Sample Input
2 1 5 3 4 9 -1
1 2 3 4 5 6 -1
Sample Output
YES
Sample Input
5 1 4 5 -1
5 1 4 -1
Sample Output
NO


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
int size(Node* head){
    Node* tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void insert_at_tail(Node* &head,Node* &tail,int v){
    Node* newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
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
    int s1=size(head);
    Node* head1=NULL;  
    Node* tail1=NULL;  
    while(true){
        int v;cin>>v;
        if(v==-1){
            break;
        }
        insert_at_tail(head1,tail1,v);
    }
    int s2=size(head1);
    if(s1==s2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}