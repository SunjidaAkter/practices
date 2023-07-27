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
    int sz(ListNode* head){
        int cnt=0;
        ListNode* tmp=head;
        while(tmp!=NULL){
            cnt++;
            tmp=tmp->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)return head;
        int lastNode=sz(head)-n;
        if(lastNode==0){
            head=head->next;
            return head;
        }
        ListNode* tmp=head;
        for(int i=1;i<=lastNode-1;i++){
            tmp=tmp->next;
        }
        ListNode* deleteNode=tmp->next;
        tmp->next=tmp->next->next;
        delete deleteNode;
        return head;
    }
};