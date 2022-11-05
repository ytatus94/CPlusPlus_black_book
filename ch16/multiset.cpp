/*
multiset 常用的方法:
insert
erase
find
count
clear
lower_bound
upper_bound
equal_range
set_difference
set_union
set_intersection

multiset 中的元素可以不是唯一的
*/
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    multiset<int, less<int>> set1, set2, union_set, intersection_set;
    ostream_iterators<multiset<int, less<int>>::value_type, char> ostream_itr(cout, " ");

    set1.insert(set1.begin(), 1);
    set1.insert(set1.begin(), 1);
    set1.insert(set1.begin(), 3);
    set1.insert(set1.begin(), 3);
    set1.insert(set1.begin(), 3);
    set1.insert(set1.begin(), 4);
    set1.insert(set1.begin(), 5);
    set1.insert(set1.begin(), 6);

    cout << "First set:" << endl;

    copy(set1.begin(), set1.end(), ostream_itr);
    cout << endl;

    set2.insert(set2.begin(), 4);
    set2.insert(set2.begin(), 4);
    set2.insert(set2.begin(), 5);
    set2.insert(set2.begin(), 5);
    set2.insert(set2.begin(), 5);
    set2.insert(set2.begin(), 6);
    set2.insert(set2.begin(), 7);
    set2.insert(set2.begin(), 8);

    cout << "Second set:" << endl;

    copy(set2.begin(), set2.end(), ostream_itr);
    cout << endl;

    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), insert_iterators<multiset<int, less<int>> (union_set, union_set.begin()));

    cout << "Union of the two sets:" << endl;
    copy(union_set.begin(), union_set.end(), ostream_itr);
    cout << endl;

    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), insert_iterators<multiset<int, less<int>> (intersection_set, intersection_set.begin()));

    cout << "Intersection of the two sets:" << endl;
    copy(intersection_set.begin(), intersection_set.end(), ostream_itr);
    cout << endl;
}
