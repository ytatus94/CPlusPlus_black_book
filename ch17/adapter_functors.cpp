#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

const int NUMBER_ELEMENTS = 6;

int main()
{
    int initial_values1[NUMBER_ELEMENTS] = {3, 5, 7, 9, 11, 13};
    int initial_values2[NUMBER_ELEMENTS] = {1, 2, 3, 4, 5, 6};

    vector<int> vector1(NUMBER_ELEMENTS);
    vector<int> vector2(NUMBER_ELEMENTS);
    vector1.assign(initial_values1, initial_values1 + NUMBER_ELEMENTS);
    vector2.assign(initial_values2, initial_values2 + NUMBER_ELEMENTS);

    ostream_iterator<int, char> ostream_itr(cout, " ");

    cout << "Vector 1: " << endl;
    copy(vector1.begin(), vector1.end(), ostream_itr);
    cout << endl;

    cout << "Vector 2: " << endl;
    copy(vector2.begin(), vector2.end(), ostream_itr);
    cout << endl;

    cout << "Vector 1 - vector 2: " << endl;
    transform(vector1.begin(), vector1.end(), vector2.begin(), ostream_itr, minus<int>()); // 用 minus<int>() 轉換，並直接藉由 ostream_itr 輸出結果
    cout << endl;

    cout << "10 * vector 2: " << endl;
    transform(vector2.begin(), vector2.end(), ostream_itr, bind1st(multiplies<int>(), 10)); // 用 multiplies<int>() 轉換，並直接由 ostream_itr 輸出結果
    cout << endl;                                          // multiplies<int>() 接受兩個參數，第一個參數是由 vector2.begin() 到 vector2.end() 之間的所有元素
                                                           // 第二個參數是 10。用 bind1st() 把 functor 變成只接受一個參數的函數，所以第二個參數 10 寫在 bind1st() 裡面
    return 0;
}
