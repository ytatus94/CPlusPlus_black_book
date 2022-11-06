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

    ostream_iterators<int, char> ostream_itr(cout, " ");

    cout << "Vector 1: " << endl;
    copy(vector1.begin(), vector1.end(), ostream_itr);
    cout << endl;

    cout << "Vector 2: " << endl;
    copy(vector2.begin(), vector2.end(), ostream_itr);
    cout << endl;

    cout << "Vector 1 - vector 2: " << endl;
    transform(vector1.begin(), vector1.end(), vector2.begin(), ostream_itr, minus<int>());
    cout << endl;

    cout << "10 * vector 2: " << endl;
    transform(vector2.begin(), vector2.end(), ostream_itr, bind1st(multiplies<int>(), 10));
    cout << endl;

    return 0;
}
