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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p=head;
        while(p!=NULL && n>0){
            p=p->next;
            n=n-1;
        }
        
        if(n>=0 && p==NULL){
            ListNode* q=head->next;
            head=q;
            return head;
        }
        ListNode* q=head;
        ListNode* r=head;
        while(p!=NULL){
            p=p->next;
            r=q;
            q=q->next;
        }
        r->next=q->next;
        q->next=NULL;
        return head;
    }
};