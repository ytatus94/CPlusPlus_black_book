/*
max_element(起點的 iterator, 終點的 iterator);
min_element(起點的 iterator, 終點的 iterator);
*/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

const int NUMBER_ELEMENTS = 8;

int main()
{
    int initial_values[NUMBER_ELEMENTS] = {1, 2, 3, 4, 5, 6, 6, 7};

    vector<int> vector1(NUMBER_ELEMENTS);
    vector1.assign(initial_values, initial_values + NUMBER_ELEMENTS);

    vector<int>::iterator maximum_value = max_element(vector1.begin(), vector1.end());
    cout << "Maximum value: " << *maximum_value << endl;

    vector<int>::iterator minimum_value = min_element(vector1.begin(), vector1.end());
    cout << "Minimum value: " << *minimum_value << endl;

    return 0;
}
