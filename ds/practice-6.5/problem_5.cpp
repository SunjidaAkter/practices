/*
Question: Take a singly linked list as input and check if the linked list is sorted in ascending order.



Sample Input
1 5 6 8 9 -1
Sample Output
YES
Sample Input
2 4 6 5 8 4 -1
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
void inser_at_tail(Node* &head,int v){
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
int main(){
    int flag=0;
    Node* head=NULL;
    while(true){
        int v;cin>>v;
        if(v==-1){
            break;
        }
        inser_at_tail(head,v);
    }
    for(Node* i=head;i->next!=NULL;i=i->next){
        for(Node* j=i->next;j!=NULL;j=j->next){
            if(i->val>j->val){
                flag=1;
            }
        }
    }
    if(flag==1){
        cout<<"NO";
    }else cout<<"YES";
    return 0;
}