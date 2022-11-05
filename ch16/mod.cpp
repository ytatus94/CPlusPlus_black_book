#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int value = 32, temp = value;
    char characters[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    stack<int> st;

    while (temp > 0) {
        st.push(temp % 16);
        temp >>= 4;
    }

    cout << "Converting " << value << " yields 0x";

    while (!st.empty()) {
        cout << characters[st.top()];
        st.pop();
    }

    return 0;
}
