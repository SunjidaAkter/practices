/*
Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.



Sample Input
2 4 6 8 10 -1
Sample Output
6
Sample Input
1 2 3 4 5 6 -1
Sample Output
3 4


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
    if(size(head)%2!=0){
        Node* tmp=head;
        for(int i=1;i<=size(head)/2;i++){
            tmp=tmp->next;
        }
        cout<<tmp->val;
    }else{
        Node* tmp=head;
        for(int i=1;i<=(size(head)-1)/2;i++){
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val;
    }   
    return 0;
}