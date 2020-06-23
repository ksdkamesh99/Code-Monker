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
        ListNode *p,*q;
        p=head;
        q=p;
        if(head==NULL || head->next==NULL){
            if(head==NULL){
                return NULL;
            }
            if(head->next==NULL){
                if(head->val!=val){
                    return head;
                }
                else{
                    return NULL;
                }
            }
        }
        while(p!=NULL){
            if(p->val==val){
                if(p==head){
                    head=p->next;
                    p->next=NULL;
                    q=head;
                    p=head;
                }
                else{
                    q->next=p->next;
                    p->next=NULL;
                    p=q->next;
            
                }
                }
            else{
                q=p;
                p=p->next;
            }
            
        }
        return head;
    }
};