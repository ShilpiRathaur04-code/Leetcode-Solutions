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
    public ListNode partition(ListNode head, int x) {
        ListNode Ah = new ListNode(0);
        ListNode Bh = new ListNode(0);
        ListNode B = Ah;
        ListNode A = Bh;
        ListNode curr = head;
        while(curr != null){
            ListNode next = curr.next;
            if(curr.val < x){
                Bh.next = curr;
                Bh = Bh.next;
                curr = curr.next;
            }else{
                Ah.next = curr;
                Ah = Ah.next;
                curr = curr.next;
            }
             curr = next;
        }

        Ah.next = null;
        Bh.next = B.next;
        return A.next;
    }
}