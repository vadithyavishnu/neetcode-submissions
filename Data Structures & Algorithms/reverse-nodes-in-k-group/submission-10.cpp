class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* cur = head;

        while (cur) {
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        if (!head) return NULL;

        // Check if k nodes exist
        ListNode* temp = head;
        for (int i = 1; i < k; i++) {
            if (temp == NULL) return head;
            temp = temp->next;
        }

        if (temp == NULL) return head;

        // Split the list
        ListNode* second = temp->next;
        temp->next = NULL;

        // Reverse first part
        ListNode* first = reverse(head);

        // head becomes the tail after reversal
        head->next = reverseKGroup(second, k);

        return first;
    }
};