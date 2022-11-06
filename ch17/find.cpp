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

    vector<int>::iterator itr1 = find(vector1.begin(), vector1.end(), 3);

    cout << "Found a " << *itr1 << endl;

    vector<int>::iterator itr2 = adjacent_find(vector1.begin(), vector1.end());

    cout << "Found adjacent elements starting with " << *itr2 << endl;

    return 0;
}
