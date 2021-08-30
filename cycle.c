/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* Node(struct ListNode* temp, struct ListNode *head)
{
    struct ListNode* q = head;
    while(temp != q)
    {
        temp = temp -> next;
        q = q -> next;
    }
    return temp;
}


struct ListNode *detectCycle(struct ListNode *head) {
    
    struct ListNode* p = head;
    struct ListNode* q = head;
    
    while(p && q && q -> next)
    {
        p = p -> next;
        q = q -> next -> next;
        
        if(p == q)
        {
            struct ListNode* node = Node(p, head);
            return node;
        }
    }
    return NULL;
}