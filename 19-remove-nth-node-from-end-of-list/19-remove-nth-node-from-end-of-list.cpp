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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        ListNode* temp2 = temp;
        while(head != NULL){
            count++;
            head = head->next;
        }
        for(int i=0;i<count-n-1;i++){
            temp = temp->next;
        }
        if(count-n == 0){
            return temp2->next;
        }
        temp->next = temp->next->next;
        return temp2;
    }
};