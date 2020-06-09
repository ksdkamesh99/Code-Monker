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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *h1=l1;
        ListNode *h2=l2;
        ListNode *end=NULL;
        ListNode *l3=NULL;
        while(h1!=NULL && h2!=NULL){
            int a=h1->val;
            int b=h2->val;
            if(a<=b){
                ListNode *h3=new ListNode(a);
                h1=h1->next;
                if(l3==NULL){
                    l3=h3;
                    end=h3;
                }
                else{
                    end->next=h3;
                    end=h3;
                }
            }
            if(a>=b){
                ListNode *h3=new ListNode(b);
                h2=h2->next;
                if(l3==NULL){
                    l3=h3;
                    end=h3;
                }
                else{
                    end->next=h3;
                    end=h3;
                }
            }
            
        }
        if(h1==NULL && h2!=NULL){
            while(h2!=NULL){
                ListNode *h3=new ListNode(h2->val);
                h2=h2->next;
                if(l3==NULL){
                    l3=h3;
                    end=h3;
                }
                else{
                    end->next=h3;
                    end=h3;
                }
            }
        }
        else if(h2==NULL && h1!=NULL){
            while(h1!=NULL){
                ListNode *h3=new ListNode(h1->val);
                h1=h1->next;
                if(l3==NULL){
                    l3=h3;
                    end=h3;
                }
                else{
                    end->next=h3;
                    end=h3;
                }
            }
        }
        return l3;
    }
};