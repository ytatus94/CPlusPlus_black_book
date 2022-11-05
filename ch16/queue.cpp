#include <queue>
#include <string>
#include <deque>
#include <iostream>
using namespace std;

int main()
{
    queue<string, deque<string>> words; // 由 deque<string> 建立一個叫做 words 的 queue 容器，容器內的元素資料型態是 string 

    words.push("Hello");
    words.push("from");
    words.push("C++");

    while (!words.empty()) {
        cout << words.front() << endl;
        words.pop();
    }

    return 0;
}
