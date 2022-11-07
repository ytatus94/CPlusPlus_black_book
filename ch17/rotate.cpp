/*
rotate(起點的 iterator, 中間點的 iterator, 終點的 iterator)
會把 起點...中間點...終點 轉成 中間點...終點起點...中間點-1
*/
#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

const int NUMBER_ELEMENTS = 12;

int main()
{
    int initial_values[NUMBER_ELEMENTS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    vector<int> vector1(NUMBER_ELEMENTS);
    vector1.assign(initial_values, initial_values + NUMBER_ELEMENTS);

    cout << "Original elements: " << endl;
    copy(vector1.begin(), vector1.end(), ostream_iterator<int, char>(cout, " "));
    cout << endl;

    rotate(vector1.begin(), vector1.begin() + 5, vector1.end());

    cout << "Rotated elements: " << endl;
    copy(vector1.begin(), vector1.end(), ostream_iterator<int, char>(cout, " "));
    cout << endl;

    return 0;
}
