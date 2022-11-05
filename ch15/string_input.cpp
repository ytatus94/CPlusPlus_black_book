/*
>>: 一次讀取一個字
getline: 一次讀取整行
  是 string 的方法
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string string1, string2;
  
    cout << "Type a word: ";
    cin >> string1;
    cout << "You typed: " << string1 << endl;
  
    cout << "Now type a line: ";
    getline(cin, string2);
    cout << "You typed: " << string2 << endl;
  
    return 0;
}
