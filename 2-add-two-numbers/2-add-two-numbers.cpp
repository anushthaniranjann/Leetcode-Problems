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
    
    ListNode* AnsStart = new ListNode(0);
    ListNode* AnsEnd = AnsStart;
    
    void addNode(int rem){
        ListNode* newNode = new ListNode(rem%10);
        AnsEnd->next = newNode;
        AnsEnd = AnsEnd->next;
    } 
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         
        int rem = 0;
        while(l1!=NULL && l2!=NULL){
            rem = l1->val+l2->val+rem;
            addNode(rem);
            rem = rem/10;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1!=NULL){
            rem = l1->val+rem;
            addNode(rem);
            rem = rem/10;
            l1 = l1->next;
        }
        while(l2!=NULL){
            rem = l2->val+rem;
            addNode(rem);
            rem = rem/10;
            l2 = l2->next;
        }
        if(rem){
            addNode(rem);
        }
        
        return AnsStart->next;
    }
};;