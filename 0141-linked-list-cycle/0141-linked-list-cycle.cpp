/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       set<ListNode*>x;
       while(head!=nullptr)
       {
        if(x.count(head))
        {
 return true;
        }
        x.insert(head);
        head=head->next;
       } 
       return false;
    }
};