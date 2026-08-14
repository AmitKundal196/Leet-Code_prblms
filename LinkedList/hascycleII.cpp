#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Detect cycle
        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {

                // Step 2: Find starting point of cycle
                slow = head;

                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }

                return slow;
            }
        }

        return NULL;
    }
};

int main() {

    // 1 -> 2 -> 3 -> 4
    //          ^    |
    //          |____|

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    // Create cycle: 4 -> 3
    head->next->next->next->next = head->next->next;

    Solution obj;

    ListNode* cycleStart = obj.detectCycle(head);

    if (cycleStart != NULL) {
        cout << "Cycle starts at node: " << cycleStart->val << endl;
    }
    else {
        cout << "No cycle" << endl;
    }

    return 0;
}