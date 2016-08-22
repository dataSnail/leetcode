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
    ListNode* swapPairs(ListNode* head) {
        ListNode * np = head;
        while(np!=NULL&&np->next!=NULL){
            int temp;
            temp = np->val;
            np->val = np->next->val;
            np->next->val = temp;
            np=np->next->next;
        }
        return head;
        
    }
};