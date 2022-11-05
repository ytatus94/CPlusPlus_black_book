#include <list>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    list<string> fruits; // 建立名叫 fruits 的 list 容器，裡面的元素資料型態是 string

    fruits.insert(fruits.begin(), "apples");
    fruits.insert(fruits.begin(), "oranges");
    fruits.insert(fruits.begin(), "cherries");

    copy(fruits.begin(), fruits.end(), ostream_iterator<string, char>(cout, " "));
    cout << endl;

    fruits.push_front("tangerines");
    fruits.push_back("pineapples");

    copy(fruits.begin(), fruits.end(), ostream_iterator<string, char>(cout, " "));
    cout << endl;

    fruits.sort();

    copy(fruits.begin(), fruits.end(), ostream_iterator<string, char>(cout, " "));
    cout << endl;

    fruits.insert(find(fruits.begin(), fruits.end(), "apples"), "pears");

    copy(fruits.begin(), fruits.end(), ostream_iterator<string, char>(cout, " "));
    cout << endl;

    *find(fruits.begin(), fruits.end(), "cherries") = "bananas" // 找出 cherries 後用 bananas 複蓋
    copy(fruits.begin(), fruits.end(), ostream_iterator<string, char>(cout, " "));
    cout << endl;

    return 0;
}
