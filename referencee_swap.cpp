#include <iostream>
using namespace std;

void swap(int &n, int &p) {
    int c = n;
    n = p;
    p = c;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swap(a, b);
    cout << "After swapping: " << a << " " << b << endl;
    return 0;
}
