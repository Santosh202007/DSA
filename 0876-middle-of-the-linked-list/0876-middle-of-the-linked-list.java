/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode h) {
                      ListNode s=h;   
              ListNode f=h;

              while(s.next!=null && f.next!=null) 
              {
               if(f.next==null)
               {
                return s;
               }
               if(f.next.next==null)
               {
                return s.next;
               }

               f=f.next.next;
               s=s.next;
              }  

              return s;
    }
}