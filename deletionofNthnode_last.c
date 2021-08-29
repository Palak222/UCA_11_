/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    
    struct ListNode *p, *q;
    p = q = head;
    int count = 1;
    
    while(count < n)
    {
        q = q -> next;
        count++;
    }
    
    if(q -> next != NULL)
    {
        q = q -> next;
    }
    else
    {
        return head -> next;
    }
        
    while(q -> next != NULL)
    {
        
        p = p -> next;
        q = q -> next;
        
    }
    
    p -> next = (p -> next) -> next; 
    return head;

}