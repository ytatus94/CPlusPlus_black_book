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
    vector<int> start(NUMBER_ELEMENTS);
    start.assign(initial_values, initial_values + NUMBER_ELEMENTS);

    vector<int> result(NUMBER_ELEMENTS);

    transform(start.begin(), start.end(), result.begin(), square<int>()); // 把 start.begin() 到 start.end() 的元素經由 square<int>() 指定的方式轉換，存到 result.being() 裡面

    cout << "Here are the squared values:" << endl;

    copy(result.begin(), result.end(), ostream_iterator<int, char>(cout, " "));
    cout << endl;

    return 0;
}
