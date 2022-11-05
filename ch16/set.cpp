/*
set 的常用方法:
insert
erase
find
count
clear
set_difference
set_union
set_intersection
*/
#include <iostream>
#include <set>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;

const int NUMBER_ELEMENTS = 5;

int main()
{
    string strings1[NUMBER_ELEMENTS] = {"A", "B", "C", "D", "E"};
    string strings2[NUMBER_ELEMENTS] = {"C", "D", "E", "F", "G"};

    set<string> first_set(string1, strings1 + NUMBER_ELEMENTS);
    set<string> second_set(string2, strings2 + NUMBER_ELEMENTS);

    ostream_iterator<string, char> ostream_itr(cout, " ");

    cout << "First set:" << endl;
    copy(first_set.begin(), first_set.end(), ostream_itr);
    cout << endl;

    cout << "Second set:" << endl;
    copy(second_set.begin(), second_set.end(), ostream_itr);
    cout << endl;

    cout << "Difference of the two sets:" << endl;
    set_difference(first_set.begin(), first_set.end(), second_set.begin(), second_set.end(), ostream_itr);
    cout << endl;

    cout << "Interesction of the two sets:" << endl;
    set_intersection(first_set.begin(), first_set.end(), second_set.begin(), second_set.end(), ostream_itr);
    cout << endl;

    cout << "Union of the two sets:" << endl;
    set_union(first_set.begin(), first_set.end(), second_set.begin(), second_set.end(), ostream_itr);
    cout << endl;

    return 0;
}
