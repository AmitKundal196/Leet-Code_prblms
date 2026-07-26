#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int index = 0;

        for (int i = 0; i < n; i++) {

            char ch = chars[i];
            int count = 0;

            // Count consecutive occurrences
            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

             if(count==1){
                chars[index++]=ch;

            }
            else{
                chars[index++]=ch;
                string str = to_string(count);

                for (char digit : str) {
                    chars[index++] = digit;
                }
            }

            // Since for-loop will increment i
            i--;
        }

        chars.resize(index);

        return index;
    }
};

int main() {

    // Test Case
    vector<char> chars = {
        'a','a','b','b','c','c','c'
    };

    Solution obj;

    int len = obj.compress(chars);

    cout << "Compressed Length = " << len << endl;

    cout << "Compressed Array: ";

    for (char ch : chars) {
        cout << ch << " ";
    }

    return 0;
}