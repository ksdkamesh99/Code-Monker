/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1=l1;
        ListNode* h2=l2;
        ListNode *end=NULL;
        ListNode *l3=NULL;
        int a=0;
        while(h1!=NULL && h2!=NULL){
            int y=h1->val+h2->val+a;
            int u=y%10;
            y=y/10;
            a=y;
            ListNode* h3=new ListNode(u);
            if(l3==NULL){
                l3=h3;
                end=h3;
            }
            else{
                end->next=h3;
                end=h3;
            }
            h1=h1->next;
            h2=h2->next;
        }
        if(h1==NULL && h2!=NULL){
            while(h2!=NULL){
                int y=h2->val+a;
                int u=y%10;
                y=y/10;
                a=y;
                ListNode* h3=new ListNode(u);
                end->next=h3;
                end=h3;
                h2=h2->next;

            }
        }
        else if(h2==NULL && h1!=NULL){
            while(h1!=NULL){
                int y=h1->val+a;
                int u=y%10;
                y=y/10;
                a=y;
                ListNode* h3=new ListNode(u);
                end->next=h3;
                end=h3;
                h1=h1->next;

            }
        }
        if(a!=0){
            ListNode* h3=new ListNode(a);
            end->next=h3;
            end=h3;
                

        }
        return l3;
    }
};