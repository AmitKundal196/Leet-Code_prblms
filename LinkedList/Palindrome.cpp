#include <iostream>
#include <vector>
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
    bool isPalindrome(ListNode* head) {

        // =====================================================
        // BRUTE FORCE APPROACH (O(n) Space)
        // =====================================================

        // ListNode* temp = head;
        // vector<int> v;

        // // Store all node values in vector
        // while (temp != NULL) {
        //     v.push_back(temp->val);
        //     temp = temp->next;
        // }

        // int start = 0;
        // int end = v.size() - 1;

        // while (start < end) {
        //     if (v[start] != v[end]) {
        //         return false;
        //     }
        //     start++;
        //     end--;
        // }

        // return true;



        // =====================================================
        // OPTIMAL APPROACH (O(1) Space)
        // =====================================================

        // Step 1: Find Middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Skip middle node if list has odd number of nodes
        if (fast != NULL) {
            slow = slow->next;
        }

        // Step 2: Reverse second half
        ListNode* prev = NULL;
        ListNode* current = slow;
        ListNode* next = NULL;

        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        // Step 3: Compare first half and reversed second half
        ListNode* p1 = head;
        ListNode* p2 = prev;

        while (p2 != NULL) {
            if (p1->val != p2->val) {
                return false;
            }

            p1 = p1->next;
            p2 = p2->next;
        }

        return true;
    }
};

int main() {

    // Create Linked List:
    // 1 -> 2 -> 2 -> 1

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    Solution obj;

    if (obj.isPalindrome(head))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}