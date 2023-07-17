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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *prev = NULL,*next,*prev2 = NULL,*next2;
        while(l1){
            next = l1->next;
            l1->next = prev;
            prev = l1;
            l1 = next;
        }
        while(l2){
            next2 = l2->next;
            l2->next = prev2;
            prev2 = l2;
            l2 = next2;
        }
        int carry = 0,sum = 0;
        ListNode*p=new ListNode(9);
        ListNode*ans=p;
        while(prev != NULL && prev2 != NULL){
            sum = (prev->val + prev2->val + carry)%10;
            carry = (prev->val + prev2->val + carry)/10;
            ans->next=new ListNode(sum);
            ans = ans->next;
            prev = prev->next;
            prev2 = prev2->next;
        }
        while(prev){
            sum = (prev->val + carry)%10;
            carry = (prev->val + carry)/10;
            ans->next=new ListNode(sum);
            ans = ans->next;
            prev = prev->next;
        }
        while(prev2){
            sum = (prev2->val + carry)%10;
            carry = (prev2->val + carry)/10;
            ans->next=new ListNode(sum);
            ans = ans->next;
            prev2 =prev2->next;
        }
        if(carry > 0){
            ans->next=new ListNode(carry);
            ans = ans->next;
        }
        ListNode* prev3 = NULL,*next3;
        while(p->next){
            next3 = p->next->next;
            p->next->next = prev3;
            prev3 = p->next;
            p->next = next3;
        }
        return prev3;    
    }
};