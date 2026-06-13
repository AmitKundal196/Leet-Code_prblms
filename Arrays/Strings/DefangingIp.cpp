#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        int index = 0;
        string ans;

        while (index < address.size()) {
            if (address[index] == '.') {
                ans = ans + "[.]";
            }
            else {
                ans = ans + address[index];
            }
            index++;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    string address;
    cin >> address;

    cout << obj.defangIPaddr(address);

    return 0;
}