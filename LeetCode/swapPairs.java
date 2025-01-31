class Solution {
    public ListNode swapPairs(ListNode head) {
        ListNode dummy = new ListNode(0); 
        // dummy -> 1 -> 2 -> 3 
        dummy.next = head; 
        ListNode pre = dummy; 

        while (pre.next != null && pre.next.next != null){
            ListNode first = pre.next, second = pre.next.next; 
            first.next = second.next; 
            second.next = first; 
            pre.next = second; 
            pre = first; 
        }

        return dummy.next; 
    }
}
