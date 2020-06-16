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
    bool isPalindrome(ListNode* head) {
        ListNode *p,*q;
        p=head;
        q=head;
        stack<int>s;
        if(p==NULL || p->next==NULL){
            return 1;
        }
        while(p!=NULL && p->next!=NULL){
            s.push(q->val);

            p=p->next->next;
            q=q->next;
        }
        if(p!=NULL){
            q=q->next;
        }
        
        while(q!=NULL){
            if(s.empty()){
                return 0;
            }
            if(q->val==s.top()){
                s.pop();
            }
            else{
                return 0;
            }
            q=q->next;
        }
        return 1;
        
        
    }
};