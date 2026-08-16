#include <iostream>
#include <vector>
using namespace std;

/*
    Definition for singly-linked list.
*/
struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode* next)
        : val(x), next(next) {}
};

class Solution {
public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // ==========================================
        // STEP 1: Store values of first linked list
        // ==========================================

        vector<int> arr1;

        ListNode* temp1 = l1;

        while (temp1 != NULL) {

            arr1.push_back(temp1->val);

            temp1 = temp1->next;
        }


        // ==========================================
        // STEP 2: Store values of second linked list
        // ==========================================

        vector<int> arr2;

        ListNode* temp2 = l2;

        while (temp2 != NULL) {

            arr2.push_back(temp2->val);

            temp2 = temp2->next;
        }


        // ==========================================
        // STEP 3: Add both numbers
        // ==========================================

        int i = 0;
        int j = 0;
        int carry = 0;

        vector<int> ans;

        while (i < arr1.size() || j < arr2.size()) {

            int x = 0;
            int y = 0;

            // Take value from arr1 if available
            if (i < arr1.size()) {
                x = arr1[i];
            }

            // Take value from arr2 if available
            if (j < arr2.size()) {
                y = arr2[j];
            }

            // Add both digits + carry
            int sum = x + y + carry;

            // Store last digit
            ans.push_back(sum % 10);

            // Store carry
            carry = sum / 10;

            i++;
            j++;
        }


        // ==========================================
        // STEP 4: If carry is left
        // ==========================================

        if (carry != 0) {
            ans.push_back(carry);
        }


        // ==========================================
        // STEP 5: Create result linked list
        // ==========================================

        ListNode* dummy = new ListNode(0);

        ListNode* curr = dummy;

        for (int x : ans) {

            curr->next = new ListNode(x);

            curr = curr->next;
        }

        return dummy->next;
    }
};


// ==========================================
// Helper function to print linked list
// ==========================================

void printList(ListNode* head) {

    while (head != NULL) {

        cout << head->val;

        if (head->next != NULL)
            cout << " -> ";

        head = head->next;
    }

    cout << endl;
}


int main() {

    /*
        Number 1:
        342

        Linked list:
        2 -> 4 -> 3

        Number 2:
        465

        Linked list:
        5 -> 6 -> 4

        Result:
        807

        Linked list:
        7 -> 0 -> 8
    */

    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);


    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);


    Solution obj;

    ListNode* result = obj.addTwoNumbers(l1, l2);


    cout << "Result: ";

    printList(result);


    return 0;
}