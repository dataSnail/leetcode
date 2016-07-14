#include <iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
bool hasCycle(ListNode *head) {
    if(head==NULL||head->next==NULL) return false;
    ListNode *pt1 = head;
    ListNode *pt2 = head->next;
    while(true){
        if(pt1->next==NULL||pt2->next==NULL) return false;
        pt1=pt1->next;
        pt2=pt2->next->next;
        if(pt1==pt2) return true;
    }
}
int main(){
    ListNode *head=new ListNode(1);
    ListNode *a = new ListNode(2);
    head->next = a;
    cout<<hasCycle(head);
    return 0;
}