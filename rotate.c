/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* rotateRight(struct ListNode* head, int k){
    
    struct ListNode* tail = head;
    int count = 1;
    if(!head)
    {
        return head;
    }
    while(tail -> next)
    {
        count++;
        tail = tail -> next;
    }
    
    k = k % count;
    if(k == 0)
    {
        return head;
    }
    else
    {
        struct ListNode* new_tail = tail;
        struct ListNode* new_head;
        tail -> next = head;
        int steps = count - k;
        while(steps)
        {
            new_tail = new_tail -> next;
            steps--;
        }
        new_head = new_tail -> next;
        new_tail -> next = NULL;
        
        return new_head;
    }
    
}