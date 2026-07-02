//23 Merge k sorted list
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        PriorityQueue<ListNode> que = new PriorityQueue<>((a, b) -> a.val - b.val);
        
        // Add the head of each list to the heap
        for (ListNode node : lists) {
            if (node != null) que.add(node);
        }

        ListNode dummy = new ListNode();
        ListNode res = dummy;
        
        while (!que.isEmpty()) {
            ListNode curr = que.poll();
            res.next = curr;
            res = res.next;
            
            // If there's a next node in the same list, add it to heap
            if (curr.next != null) {
                que.offer(curr.next);
            }
        }
        return dummy.next;
    }
}
