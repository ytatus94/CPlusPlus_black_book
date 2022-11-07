/*
remove(起點的 iterator, 終點的 iterator, 要刪除的東西);
remove_if(起點的 iterator, 終點的 iterator, 當 if 是 True 時用某個函數做刪除);
erase(起點的 iterator, 終點的 iterator); // 刪除範圍內的所有元素
用 remove() 的話只是傳回 iterator 還需要用 erase() 來刪除

remove_copy(起點的 iterator, 終點的 iterator, 結果的 iterator, 要刪除的東西)
remove_copy_if(起點的 iterator, 終點的 iterator, 結果的 iterator, 當 if 是 True 時用某個函數做刪除)
用 remove_copy() 的話就直接在副本中把結果刪除
*/
#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>
using namespace std;

template<class T>
class greater_than_5
{
public:
    bool operator() (const T& value) {return value > 5;}
};

const int NUMBER_ELEMENTS = 10;

int main()
{
    int initial_values[NUMBER_ELEMENTS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    vector<int> vector1(NUMBER_ELEMENTS);
    vector<int> vector2(NUMBER_ELEMENTS);
    vector1.assign(initial_values, initial_values + NUMBER_ELEMENTS); // 用 assign() 初始化 vector1
    vector2.assign(initial_values, initial_values + NUMBER_ELEMENTS); // 用 assign() 初始化 vector1

    cout << "Original vector: " << endl;
    copy(vector1.begin(), vector1.end(), ostream_iterator<int, char>(cout, " ")); // 把起點到終點的所有元素拷貝到 ostream_iterator (就是用 ostream_iterator 輸出)
    cout << endl;

    cout << "Removing the 8: " << endl;
    vector<int, allocator<int>>::iterator result = remove(vector1.begin(), vector1.end(), 8); // remove() 傳回 iterator
    vector1.erase(result, vector1.end()); // 這邊才是真的刪掉

    copy(vector1.begin(), vector1.end(), ostream_iterator<int, char>(cout, " "));
    cout << endl;

    cout << "Removing elements greater than 5: " << endl;
    result = remove_if(vector1.begin(), vector1.end(), greater_than_5<int>());
    vector1.erase(result, vector1.end());

    copy(vector1.begin(), vector1.end(), ostream_iterator<int, char>(cout, " "));
    cout << endl;

    cout << "Using the copying version to remove the 8: " << endl;
    remove_copy(vector2.begin(), vector2.end(), ostream_iterator<int, char>(cout, " "), 8);
    cout << endl;

    cout << "Using the copying version to remove elements greater than 5: " << endl;
    remove_copy_if(vector2.begin(), vector2.end(), ostream_iterator<int, char>(cout, " "), greater_than_5<int>());
    cout << endl;

    return 0;
}
