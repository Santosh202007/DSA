class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> x;

        while(headA)
        {
            x.insert(headA);
            headA = headA->next;
        }

        while(headB)
        {
            if(x.find(headB) != x.end())
            {
                return headB;
            }

            headB = headB->next;
        }

        return nullptr;
    }
};