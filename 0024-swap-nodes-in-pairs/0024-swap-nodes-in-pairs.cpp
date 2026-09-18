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
    ListNode* swapPairs(ListNode* head) {
                if(head==nullptr || head->next==nullptr)
        {
            return head;
        }

        if(head->next->next==nullptr)
        {
           ListNode *x=head->next;
           x->next=head;
           head->next=nullptr;
             return x;
        }
        ListNode *prev=head;
        ListNode *current=head->next;
        ListNode *right=current->next;
      prev->next=current->next;
   current->next=prev;
 head=current;

current=prev->next;
right=current->next;

        while(current!=nullptr && current->next!=nullptr && right!=nullptr)
        {
      prev->next=current->next;
      current->next=right->next;
      right->next=current;

     prev=current;
     current=prev->next;
     if(current!=nullptr)
     right=current->next;

        }  
        return head;
    }
};