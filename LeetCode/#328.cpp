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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *p,*q,*r,*s;
        if(head==NULL || head->next==NULL){
            return head;
        }
        p=head;
        q=head->next;
        r=head->next;
        s=p;
        while(p!=NULL && p->next!=NULL){
            p->next=q->next;
            s=p;

            p=p->next;
            if(p!=NULL){
                q->next=p->next;
                 q=q->next;
        
            }
            }
         if(p==NULL){
            s->next=r;
             return head;
        }
       
        if(p->next==NULL){
            p->next=r;
            return head;
        }
        return head;
        
        
    }
};