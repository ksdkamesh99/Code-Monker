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
    ListNode* reverseList(ListNode* head) {
        ListNode *nex,*curr,*prev;
        nex=head;
        curr=head;
        prev=NULL;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(curr->next!=NULL){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        curr->next=prev;
        head=curr;
        return head;
    }
};