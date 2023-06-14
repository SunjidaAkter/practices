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
void get_mid(Node* head){

}
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
        cnt++;
    }
    Node* tmp=head;
    if(cnt%2!=0){
        for(int i=1;i<=cnt/2;i++){
            tmp=tmp->next;
        }
        cout<<tmp->val;
    }else{
        for(int i=1;i<=(cnt-1)/2;i++){
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val;
    }
    return 0;
}