/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0, head);
        ListNode* prevGroup = &dummy;

        while(true) {
            // Find the kth node of this group
            ListNode* kth = prevGroup;

            for(int i = 0; i < k; i++) {
                kth = kth->next;
                if(kth == nullptr) return dummy.next;
            }

            // Store the next group's starting node
            ListNode* nextGroup = kth->next;

            // Reverse the current group
            ListNode* prev = nextGroup;
            ListNode* curr = prevGroup->next;

            while(curr != nextGroup) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }

            // Connect the previous group to the reversed group
            ListNode* temp = prevGroup->next;
            prevGroup->next = kth;
            prevGroup = temp;
        }

        return dummy.next;
    }
};
