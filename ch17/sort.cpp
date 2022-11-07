#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
using namespace std;

const int NUMBER_ELEMENTS = 8;

int main()
{
    int initial_values[NUMBER_ELEMENTS] = {9, 2, 3, 4, 5, 6, 6, 7};

    vector<int> vector1(NUMBER_ELEMENTS);
    vector1.assign(initial_values, initial_values + NUMBER_ELEMENTS);

    ostream_iterator<int, char> ostream_itr(cout, " ");

    sort(vector1.begin(), vector1.end());
    copy(vector1.begin(), vector1.end(), ostream_itr);
    cout << endl;

    sort(vector1.begin(), vector1.end(), greater<int>());
    copy(vector1.begin(), vector1.end(), ostream_itr);
    cout << endl;

    return 0;
}
