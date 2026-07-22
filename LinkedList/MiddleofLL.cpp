#include <iostream>
using namespace std;

// Definition for singly-linked list
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
    ListNode* middleNode(ListNode* head) {

        // ===========================
        // Brute Force Approach
        // ===========================

        // int count = 0;
        // ListNode* temp = head;

        // // Count total nodes
        // while (temp != NULL) {
        //     count++;
        //     temp = temp->next;
        // }

        // // Find middle index
        // int mid = count / 2;

        // // Traverse to middle node
        // temp = head;
        // while (mid--) {
        //     temp = temp->next;
        // }

        // return temp;


        // ===========================
        // Optimal Approach
        // Slow & Fast Pointer
        // ===========================

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};

int main() {

    // Create Linked List:
    // 1 -> 2 -> 3 -> 4 -> 5

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution obj;

    ListNode* middle = obj.middleNode(head);

    // Print only the middle node value
    cout << "Middle Node: " << middle->val << endl;

    return 0;
}