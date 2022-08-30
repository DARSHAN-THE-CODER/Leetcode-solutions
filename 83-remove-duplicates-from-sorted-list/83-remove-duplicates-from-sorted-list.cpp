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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode* temp=head->next;
        ListNode* curr=head;
        
        while(temp!=NULL){
            if(curr->val == temp->val){
                curr->next = temp->next;
            }
            else{
                curr=temp;
            }
            temp=temp->next;
        }
        return head;
    }
};