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
    public ListNode rotateRight(ListNode head, int k) {
        if(head == null || head.next == null){
            return head;
        }
        ListNode tail = head;
        int n =1;
        //size
        while(tail.next != null){
            tail = tail.next;
            n++;
        }
        //update k
        k %= n;
        if(k == 0){
            return head;
        }
        ListNode curr = head;
        for(int i=0;i<n-k-1;i++){
            curr = curr.next;
        }
        ListNode newhead = curr.next;
        tail.next = head;
        curr.next = null;
        return newhead;
        
    }
}