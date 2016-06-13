/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //solution1
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *nowNode = NULL;
        ListNode *temNode = NULL;
        //head is null or only one element,just return head!
        if(head==NULL||head->next==NULL){
            return head;
        }
        //deal with the first node
        nowNode = head;
        head = head->next;
        nowNode->next = NULL;
        while(head->next!=NULL){
            temNode = head->next;
            head->next = nowNode;
            nowNode = head;
            head = temNode;
        }
        
        //last one
        if(nowNode!=NULL&&head->next==NULL){
            head->next = nowNode;
        }
        return head;
    }
};

//solution2
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *nowNode = NULL;
        while(head!=NULL){
            ListNode *temNode = head->next;
            head->next = nowNode;
            nowNode = head;
            head = temNode;
        }
        return nowNode;
    }
};