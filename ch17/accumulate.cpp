/*
accumulate(起點的指標，終點的指標，要累計的初始值)
*/
#include <algorithm>
#include <functional>
#include <numeric>
#include <iostream>
using namespace std;

const int NUMBER_ELEMENTS = 4;

int main()
{
    int numbers[NUMBER_ELEMENTS] = {1, 2, 3, 4};

    int result = accumulate(numbers, numbers + NUMBER_ELEMENTS, 0); // 用 0 當累加的初始值

    cout << "Adding the values gives: " << result << endl;

    result = accumulate(numbers, numbers + NUMBER_ELEMENTS, 1, multiplies<int>()); // 用 1 當相乘的初始值，這邊用 multiplier<int>() 所以 accumulate 會用乘法

    cout << "Multiplying the values gives: " << result << endl;

    return 0;
}
