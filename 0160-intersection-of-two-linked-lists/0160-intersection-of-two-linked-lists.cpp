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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0,l2=0;
        ListNode *p= headA,  *l=headB;
   while(p!=NULL)
   {
l1++;
p=p->next;
   }
   while(l!=NULL)
   {

l2++;
l=l->next;
   }
        p=headA;
        l=headB;

   int x=0;
        int y=abs(l1-l2);
        if(l1>l2)
        {
       while(x!=y)
       {
   p=p->next;
   x++;
       }
        }
        else
        {
                while(x!=y)
                {
   l=l->next;
x++;
                }
        }
        
    while( l!=nullptr && p!=nullptr)
    {
         if(p==l)
        {
            return p;
        }

        p=p->next;
        l=l->next;
    }
    return nullptr;
    }
};