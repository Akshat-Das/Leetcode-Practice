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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *ref1 = head;
        ListNode *ref2 = head;
        int count = 1;
        while(head->next != NULL){
            head = head->next;
            count += 1;
        }
        if(count%2== 1){
           count = (count-1)/2;
        }else{
            count = count/2;
        }
        if(count == 0){
            return NULL;
        }else{
            while(count != 1){
                ref1 = ref1->next;
                count--;
            }
            ref1->next = ref1->next->next;
        }
        return ref2;
    }
};