/*
stack 常用的方法:
push
pop
top
*/
#include <stack>
#include <vector>
#include <deque>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    stack<string, vector<string>> words; // 基於 vector<string> 建立一個叫做 words 的 stack 容器，容器內的元素資料型態是 string

    words.push("C++");
    words.push("from");
    words.push("Hello");

    while (!words.empty()) {
        cout << words.top() << endl;
        words.pop();
    }
  
    return 0;
}
