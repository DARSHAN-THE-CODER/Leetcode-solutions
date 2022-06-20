/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* l = NULL;
     struct ListNode* a = list1;
     struct ListNode* b = list2;
     struct ListNode* c = NULL;
    
    if(list1==NULL)
    {
        l=list2;
        return l;
    }
    else if(list2==NULL)
    {
        l=list1;
        return l;
    }
    
    if(list1->val < list2->val){
        l = list1;
        a = a->next;
    }else{
        l = list2;
        b = b->next;
    }
    c = l;
    
    while(a!=NULL && b!=NULL)
    {
        if(a->val < b->val)
        {
            c->next=a;
            c=c->next;
            a=a->next;
        }
        else{
            c->next=b;
            c=c->next;
            b=b->next;
        }
    }
    if(a == NULL){
        c->next = b;
    }else if(b == NULL){
        c->next = a;
    }
    return l;
}