/*
和 ch15 的一模一樣

copy(起點的指標或 iterator，終點的指標或 iterator，結果的指標或 iterator)
*/
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

const int MAX = 5;

int main()
{
    int numbers_array[MAX];
    vector<int> numbers_vector(MAX);

    for (int loop_index = 0; loop_index < MAX; loop_index++) {
        numbers_array[loop_index] = loop_index; // 先初始化 numbers_array 陣列
    }

    copy(numbers_array, numbers_array + MAX, numbers_vector.begin()); // 把 numbers_array 的所有元素拷貝到 numbers_vector 裡面

    ostream_iterator<int, char> ostream_itr(cout, " ");

    copy(numbers_vector.begin(), numbers_vector.end(), ostream_itr); // 把 numbers_vector 的所有元素拷貝到 ostream_itr 裡面 (就是用 ostream_itr 輸出結果)
    cout << endl;

    return 0;
}
