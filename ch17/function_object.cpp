/*
functor 可以是
1. 普通的函數
2. 函數指標
3. 運算子重載

xxx.assign(起點的指標或 iterator, 終點的指標或 iterator)
把從起點到終點的所有元素，賦值給 XXX

transform(起點的 iterator, 終點的 iterator, 結果的 iterator, functor)
把從起點到終點的所有元素經過 functor 轉換後，放到結果裡面去
*/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

template<class T>
class square
{
public:
    T operator() (const T& value) // 用 template 來定義 operator() 方法
    {
        return value * value;
    }
};

const int NUMBER_ELEMENTS = 8;

int main()
{
    int initial_values[NUMBER_ELEMENTS] = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> start(NUMBER_ELEMENTS); // 宣告一個叫做 start 的 vector 容器，其中會包含 NUMBER_ELEMENTS 個 int 型態的元素
    start.assign(initial_values, initial_values + NUMBER_ELEMENTS); // 把 initial_values 的內容賦值給 start

    vector<int> result(NUMBER_ELEMENTS);

    transform(start.begin(), start.end(), result.begin(), square<int>()); // 把 start.begin() 到 start.end() 的元素經由 square<int>() 指定的方式轉換，存到 result.being() 裡面

    cout << "Here are the squared values:" << endl;

    copy(result.begin(), result.end(), ostream_iterator<int, char>(cout, " "));
    cout << endl;

    return 0;
}
