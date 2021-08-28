/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
    
    struct ListNode *p, *q;
    p = q = head;
    
    while(left < right)
    {
        int i = 1, j = 1;
        while(i < left)
        {
            p = p -> next;
            i++;
        }
        while(j < right)
        {
            q = q -> next;
            j++;
        }
        int temp = p -> val;
        p -> val = q -> val;
        q -> val = temp;
        
        left++;
        right--;
        
        p = head;
        q = head;
    }
    
    return head;

}
