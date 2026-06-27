// 876. Middle of the linked list
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;         // move 1 step
            fast = fast->next->next;   // move 2 steps
        }

        return slow; // when fast reaches end, slow is in middle
    }
};
