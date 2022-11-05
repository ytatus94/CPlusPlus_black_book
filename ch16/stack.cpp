#include <stack>
#include <vector>
#include <deque>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    stack<string, vector<string>> words;

    words.push("C++");
    words.push("from");
    words.push("Hello");

    while (!words.empty()) {
        cout << words.top() << endl;
        words.pop();
    }
  
    return 0;
}
