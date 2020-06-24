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
    int getDecimalValue(ListNode* head) {
        ListNode *p,*q;
        int n=0;
        p=head;
        q=head;
        while(p!=NULL){
            n++;
            p=p->next;
        }
        int num=0;
        while(q!=NULL){
            num=num+(q->val)*pow(2,n-1);
            q=q->next;
            n--;
        }
        return num;
    }
};