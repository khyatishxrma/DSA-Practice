// Remove Nth node from the end of the linked list
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // Step 1: Create dummy node
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Step 2: Move fast n steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // Step 3: Move both pointers until fast reaches the last node
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Step 4: Delete the nth node from end
        ListNode* deleteNode = slow->next;
        slow->next = slow->next->next;
        delete deleteNode;

        // Step 5: Return the new head
        return dummy->next;
    }
};
