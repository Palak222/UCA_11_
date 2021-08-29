/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverse(struct ListNode* head)
{
    struct ListNode *prevnode, *nextnode, *currnode;
    prevnode = NULL;
    nextnode = currnode = head;
    while(nextnode != NULL)
    {
        nextnode = nextnode -> next;
        currnode -> next = prevnode;
        prevnode = currnode;
        currnode = nextnode;
    }
    return prevnode;
}

bool isPalindrome(struct ListNode* head){

    struct ListNode *p , *q;
    p = q = head;
    
    while(q -> next != NULL && q -> next -> next != NULL)
    {
        p = p -> next;
        q = q -> next -> next;
    }
    struct ListNode* newhead = reverse(p -> next);
    p -> next = NULL;
    
    struct ListNode* dummy = head;
    struct ListNode* newdummy = newhead;
    while(dummy && newdummy)
    {
        if(dummy -> val != newdummy -> val)
        {
            return false;
        }
        dummy = dummy -> next;
        newdummy = newdummy -> next;
    }
    return true;
}