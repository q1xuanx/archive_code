class Solution {
    public ListNode swapPairs(ListNode head) {
        ListNode dummy = new ListNode(0), pre = dummy; 
        dummy.next = head; 
        while (pre.next != null && pre.next.next != null){
            ListNode cur = pre.next, suc = cur.next, tmp = suc.next;
            pre.next = suc; 
            suc.next = cur;
            cur.next = tmp;
            pre = cur; 
        }        
        return dummy.next;
    }
}
