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
    public void reorderList(ListNode head) {
        if(head == null || head.next == null){
            return ;
        }
        ListNode s = head;
        ListNode f = head;
        while(f.next != null && f.next.next != null){
            s= s.next ;
            f= f.next.next;
            
        }
        ListNode curr = s.next;
        s.next = null;
        ListNode prev = null;
        while(curr != null){
            ListNode next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        ListNode First = head;
        ListNode sec = prev;
        while(sec != null){
            ListNode next1 = First.next;
            ListNode next2 = sec.next;
            First.next = sec;
            sec.next = next1;
            First = next1;
            sec = next2;
        }
        
        
    }
}