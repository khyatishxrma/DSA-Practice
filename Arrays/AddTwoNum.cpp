//2 Add two numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0); // dummy node to simplify code
        ListNode* current = dummyHead; // will be used to build the result list
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10; // update carry
            int digit = sum % 10; // digit to store in new node

            current->next = new ListNode(digit); // add digit node
            current = current->next;
        }

        return dummyHead->next; // skip dummy node
    }
};
