#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

const int NUMBER_ELEMENTS = 10;

int main()
{
    int initial_values[NUMBER_ELEMENTS] = {4, 5, 5, 9, 5, 8, 8, 8, 3, 7};
    vector<int> vector1(NUMBER_ELEMENTS);
    vector1.assign(initial_values, initial_values + NUMBER_ELEMENTS);

    cout << "The original vector: " << endl;
    copy(vector1.begin(), vector1.end(), ostream_iterator<int, char>(cout, " "));
    cout << endl;

    cout << "The vector after applying the unique algorithm: " << endl;
    unique_copy(vector1.begin(), vector1.end(), ostream_iterator<int, char>(cout, " "));
    cout << endl;
    return 0;
}
