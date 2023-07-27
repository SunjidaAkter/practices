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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)return head;
        if(head->val==val){
            while(head!=NULL && head->val==val){
                if(head->val==val){
                    head=head->next;
                }
                
            }
                    
        }
        ListNode* tmp=head;
        while(tmp!=NULL &&tmp->next!=NULL){
            if(tmp->next->val==val){
                tmp->next=tmp->next->next;
            }
            if(tmp->next==NULL)return head;
            else if(tmp->next->val!=val){
                tmp=tmp->next;
            } 
        }
            
        return head;

    }
    
};