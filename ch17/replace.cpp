/*
replace(起點的 iterator, 終點的 iterator, 要被取代的東西， 要用來取代的東西);
*/
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

bool is_odd(int value) {return value % 2;}

const int NUMBER_ELEMENTS = 8;

int main()
{
    int initial_value[NUMBER_ELEMENTS] = {1, 2, 3, 4, 5, 6, 6, 7};

    vector<int> vector1(NUMBER_ELEMENTS);
    vector1.assign(initial_value, initial_value + NUMBER_ELEMENTS);

    cout << "The original vector:" << endl;
    copy(vector1.begin(), vector1.end(), ostream_iterator<int, char>(cout, " "));
    cout << endl;

    cout << "Replacing 5 with 0:" << endl;
    replace(vector1.begin(), vector1.end(), 5, 0);

    copy(vector1.begin(), vector1.end(), ostream_iterator<int, char>(cout, " "));
    cout << endl;

    cout << "Replacing odd numbers with 0:" << endl;
    replace_if(vector1.begin(), vector1.end(), is_odd, 0);
    copy(vector1.begin(), vector1.end(), ostream_iterator<int, char>(cout, " "));
    cout << endl;

    return 0;
}
