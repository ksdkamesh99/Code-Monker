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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *nex,*prev,*curr,*cur,*hea,*previ,*headed;
        int i=1;
        curr=head;
        headed=head;
        prev=NULL;
        previ=head;
        while(i<m){
            previ=curr;
            curr=curr->next;
            i=i+1;
        }
        cur=curr;
        nex=cur;
        hea=cur;
        while(i<n){
            nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
            i=i+1;
        }
        nex=cur->next;
        cur->next=prev;
        if(m==1){
            head=cur;

        }
        else{
            previ->next=cur;

        }
        hea->next=nex;
                
        return head;
                
    }
};