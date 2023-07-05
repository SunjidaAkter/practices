/*

Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.

Sample Input
5
10 20 30 40 50
5
10 20 30 40 50
Sample Output
YES
Sample Input
5
10 20 30 40 50
4
10 20 30 40
Sample Output
NO
Sample Input
5
10 20 30 40 50
5
50 40 30 20 10
Sample Output
NO


*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
class myStack{
    public:
        Node* head=NULL;
        Node* tail=NULL;
        int sz=0;
        void push(int val){
            sz++;
            Node* newNode=new Node(val);
            if(head==NULL){
                head=newNode;
                tail=newNode;
                return;
            }
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }
        void pop(){
            sz--;
            Node* deleteNode=tail;
            tail=tail->prev;
            if(tail==NULL){
                head==NULL;
            }else{
                tail->next=NULL;
            }
            delete deleteNode;
        }
        int top(){
            return tail->val;
        }
        int size(){
            return sz;
        }
        bool empty(){
            if(!sz)return true;
            else return false;
        }
};
int main(){
    bool flag=true;
    myStack st,newSt;
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        st.push(x);
    }
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        newSt.push(x);
    }
    if(m==n){
        while(!st.empty()){
            if(st.top()!=newSt.top()){
                flag=false;
                break;
            }
            st.pop();newSt.pop();
        }
    }else{
        flag=false;
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
    return 0;
}