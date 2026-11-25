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
    // public ListNode reverseList(ListNode head){
    // //     ListNode prev = null;
    //     ListNode curr = head;

    //     while(curr != null){
    //         ListNode next = curr.next;
    //         curr.next = prev;
    //         prev = curr;
    //         curr = next;
    //     }
    //     return prev;
    // }

    // public ListNode findMid(ListNode head){
    //     ListNode hare = head;
    //     ListNode turtle = head;

    //     while(hare.next != null && hare.next.next != null){
    //         hare = hare.next.next;
    //         turtle = turtle.next;
    //     }
    //     return turtle;
    // }
    public boolean isPalindrome(ListNode head) {
    //     if(head == null || head.next == null){
    //         return true;
    //     }

    //     ListNode mid = findMid(head);
        
    //     ListNode SecHs = reverseList(mid.next);
    //     ListNode fhs = head;
         
    //      while(SecHs != null){
    //         if(fhs.val != SecHs.val){
    //             return false;
    //         }
    //         fhs = fhs.next;
    //         SecHs = SecHs.next;
    //      }
    //      return true;
       ListNode p = head ;
        Stack<Integer>s = new Stack<>();
        while(p != null){
            s.push(p.val);
            p = p.next;
        }
        p = head;
        while(p != null){
            if(p.val != s.peek()){
               return false;
            }else{
            s.pop();
            p = p.next;
            }
        }
        return true;

    }
}
    

        
        
    
