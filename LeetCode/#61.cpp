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
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        ListNode *p,*q;
        p=head;
        q=head;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(p!=NULL){
            n++;
            q=p;
            p=p->next;
        }
        k=k%n;
        ListNode *r,*s,*t;
        r=head;
        if(k==0){
            return head;
        }
        for(int i=1;i<n-k;i++){
            r=r->next;
        }
        s=r->next;
        t=head;
        head=s;
        q->next=t;
        r->next=NULL;
        return head;
        
    }
};