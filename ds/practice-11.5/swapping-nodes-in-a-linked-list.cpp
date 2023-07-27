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
        ListNode* tmp=head;
        int cnt=0;
        while(tmp!=NULL){
            cnt++;
            tmp=tmp->next;
        }
        return cnt;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* tmp1=head;
        ListNode* tmp2=head;
        int last=sz(head)-k;
        if(k==1){
            while(tmp2->next!=NULL)tmp2=tmp2->next;
            swap(tmp1->val,tmp2->val);
            return head;
        }
        for(int i=1;i<=last;i++){
            tmp2=tmp2->next;
        }
        for(int i=1;i<=k-1;i++){
            tmp1=tmp1->next;
        }
        swap(tmp1->val,tmp2->val);
        return head;
    }
};