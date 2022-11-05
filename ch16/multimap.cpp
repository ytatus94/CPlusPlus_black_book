/*
multimap 常用的方法
find
count
lower_bound
upper_bound
insert
equal_range
multimap 的 key 可以儲存很多個 values，不能使用 [] 運算子
*/
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    multimap<int, string> friends;

    friends.insert(pair<const int, string>(35, "Ralph"));
    friends.insert(pair<const int, string>(29, "Sally"));
    friends.insert(pair<const int, string>(77, "Tom"));
    friends.insert(pair<const int, string>(35, "Frank"));
    friends.insert(pair<const int, string>(24, "April"));
    friends.insert(pair<const int, string>(61, "Tina"));

    cout << "Number of friends 35 years old: " << friends.count(35) << endl;

    multimap<int, string>::iterator itr;

    pair<multimap<itr, string>::iterator, multimap<int, string>::iterator> range_pair = friends.equal_range(35);

    cout << "Friends 35 years old:" << endl;
    for (itr = range_pair.first; itr != range_pair.second; ++itr)
        cout << itr->second << endl;

    return 0;
}
