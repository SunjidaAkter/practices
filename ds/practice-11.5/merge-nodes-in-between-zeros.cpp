/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void insert_at_tail(ListNode* &head,ListNode* &tail,int v){
        ListNode* newNode=new ListNode(v);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return ;
        }
        tail->next=newNode;
        tail=newNode;
    }
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newHead=NULL;
        ListNode* newTail=NULL;
        ListNode* tmp=head;
        int sum=0;
        tmp=tmp->next;
        while(tmp!=NULL){
            sum+=tmp->val;
            if(tmp->val==0){
                insert_at_tail(newHead,newTail,sum);
                sum=0;
            }
            tmp=tmp->next;
        }
    return newHead;
    }
};