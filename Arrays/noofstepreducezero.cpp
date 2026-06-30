#include <iostream>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;

        while (num > 0) {
            if (num % 2 == 0) {
                num /= 2;
            } else {
                num -= 1;
            }
            steps++;
        }

        return steps;
    }
};

int main() {
    Solution obj;

    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Number of Steps: " << obj.numberOfSteps(num) << endl;

    return 0;
}