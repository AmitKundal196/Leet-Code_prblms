#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = 0;
        int j = 0;

        vector<int> ans;

        while (i < m && j < n) {

            if (nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            }
            else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while (i < m) {
            ans.push_back(nums1[i]);
            i++;
        }

        while (j < n) {
            ans.push_back(nums2[j]);
            j++;
        }

        for (int k = 0; k < m + n; k++) {
            nums1[k] = ans[k];
        }
    }
};

int main() {

    int m, n;

    cout << "Enter m: ";
    cin >> m;

    cout << "Enter n: ";
    cin >> n;

    // Allocate vectors after taking m and n
    vector<int> nums1(m + n);
    vector<int> nums2(n);

    cout << "Enter " << m << " sorted elements of nums1: ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    cout << "Enter " << n << " sorted elements of nums2: ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    Solution obj;
    obj.merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }

    cout << endl;

    return 0;
}