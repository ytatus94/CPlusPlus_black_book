/*
priority_queue 的常用方法
size
empty
top
back
push
pop

priority_queue 中的元素是排序過的，最大的元素是在第一個，但是可以改變排序
*/
#include <queue>
#include <deque>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    priority_queue<string> words; // 其實是 priority_queue<string, vector<string>, less<string>> words; 的簡化

    words.push("Cat");
    words.push("Rat");
    words.push("Bat");

    while (!words.empty()) {
        cout << words.top() << endl;
        words.pop();
    }

    priority_queue<string, vector<string>, greater<string>> words2;

    words2.push("Cat");
    words2.push("Rat");
    words2.push("Bat");

    while (!words2.empty()) {
        cout << words2.top() << endl;
        words2.pop();
    }

    return 0;
}
