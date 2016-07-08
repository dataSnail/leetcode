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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode *currentNode = head;
        ListNode *tem;
        int lastNum = currentNode->val;
        while(currentNode->next){
            if(lastNum==currentNode->next->val&&currentNode->next->next==NULL) {
                currentNode->next=NULL;
                break;
            }
            else{
                tem = currentNode;
                currentNode = currentNode->next;
                if(lastNum == currentNode->val){
                    currentNode->val=currentNode->next->val;
                    currentNode->next=currentNode->next->next;
                    currentNode=tem;//返回上一节点重新检查，有什么好的办法呢
                }
                lastNum = currentNode->val; 
            }

        }
        return head;
    }
};

//see the solution
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *current = head;
        while(current!=NULL&&current->next!=NULL){
            if(current->next->val==current->val){
                current->next=current->next->next;
            }else{
                current=current->next;
            }
        }
        return head;
    }
};