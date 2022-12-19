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
class Solution 
{
public:
    
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) 
    {
        if(!a||!b)
            return a?a:b;
        
        if(a->val > b->val)
            swap(a, b);
        auto head=a;
        while(a && b)
        {
            if(!a->next || a->next->val > b->val)
                swap(a->next, b);
            a=a->next;
        }
        return head;
    }
};