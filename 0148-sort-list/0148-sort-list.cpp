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
    ListNode* sortList(ListNode* head) 
    {
        if(head==nullptr)
        return nullptr;
        multimap<int,ListNode*>x;
ListNode *temp=head;
while(temp!=nullptr)
{
x.insert({temp->val,temp});
temp=temp->next;
}
ListNode *newh=x.begin()->second;
ListNode *c=newh;
auto it=x.begin();
it++;
while(it!=x.end())
{
c->next=it->second;
c=c->next;
it++;
}
c->next=nullptr;
return newh;
    }
};