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
    ListNode* swapPairs(ListNode* head) {
        ListNode* p1=head;
        ListNode* p2=NULL;
        ListNode* p3=NULL;
        while(p1!=NULL && p1->next!=NULL){
            if(p1==head){
                p2=p1->next;
                p1->next=p2->next;
                p2->next=p1;
                head=p2;
                p3=p1;
            }
            else{
                p2=p1->next;
                p1->next=p2->next;
                p2->next=p1;
                p3->next=p2;
                p3=p1;
            }
            p1=p1->next;
            
        }
        return head;
        
    }
    
};