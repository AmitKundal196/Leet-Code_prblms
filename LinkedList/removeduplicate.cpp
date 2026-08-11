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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL) {

            if (temp->val == temp->next->val) {
                temp->next = temp->next->next;
            }
            else {
                temp = temp->next;
            }
        }

        return head;
    }
};

int main() {
    // Example: 1 -> 1 -> 2 -> 3 -> 3

    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    Solution obj;

    head = obj.deleteDuplicates(head);

    // Print result
    ListNode* temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}