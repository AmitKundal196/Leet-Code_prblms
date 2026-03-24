#include <iostream>
#include <stack>
#include <string>
using namespace std;
int priority(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}
string inToPost(string infix)
{
    stack<char> st;
    string postfix = "";
    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];
        if (isalnum(c))   //
            postfix += c;
        else if (c == '(')
            st.push('(');
        else if (c == ')') {
            while (st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty()
                   && priority(c)
                          <= priority(st.top())) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main()
{
    string infix;
    cout << " Enter the string";
    getline(cin, infix);
   
    cout << "Infix Expression: " << infix << endl;
    cout << "Postfix Expression: " << inToPost(infix)
         << endl;
    return 0;
}