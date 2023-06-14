/*
Question: Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.


Sample Input
5 4 8 6 2 1 -1
Sample Output
NO


Sample Input
2 4 5 6 7 4 -1
Sample Output
YES
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
int main(){
    Node* head=NULL;
    int v,flag=0,f[100]={0},cnt=0;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        insert(head,v);
        f[v-1]++;
    }
    for(int i=0;i<100;i++){
        if(f[i]>1){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}