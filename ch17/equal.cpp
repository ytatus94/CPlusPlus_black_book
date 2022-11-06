/*
equal(要比較的東西 1 的起點的 iterator, 要比較的東西 1 的終點的 iterator, 要比較的東西 2 的起點的 iterator);
*/
#include <algorithm>
#include <vector>
#include <functional>
#include <iostream>
using namespace std;

const int NUMBER_ELEMENTS = 5;

int main()
{
    int initial_values1[NUMBER_ELEMENTS] = {1, 2, 3, 4, 5};
    int initial_values2[NUMBER_ELEMENTS] = {1, 2, 4, 3, 5};

    vector<int> vector1(NUMBER_ELEMENTS);
    vector1.assign(initial_values1, initial_values1 + NUMBER_ELEMENTS); // 用 assign 初始化 vector1
    vector<int> vector2(NUMBER_ELEMENTS);
    vector2.assign(initial_values2, initial_values2 + NUMBER_ELEMENTS); // 用 assign 初始化 vector2

    if (equal(vector1.begin(), vector1.end(), vector2.begin())) // vector1 和 vector2 對應的元素互相比較
        cout << "Vectors are equal" << endl;
    else
        cout << "Vectors are not equal" << endl;

    return 0;
}
