#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
    string string1[4] = {"This", "is", "a", "test"};
    string string2[2] = {"not", "really"};
    string string3[3] = {"yes", "it", "is"};
  
    vector<string> text(4);
    copy(string1, string1 + 4, text.begin());
  
    ostream_iterators<string, char> out(cout, " ");
  
    copy(text.begin(), text.end(), out);
    cout << endl;
  
    copy(string2, string1, insert_iterators<vector<string>>(text, text.begin() + 2)); // insert_iterators<type> name(插入到什麼東西中，從哪裡開始) 如果沒有 name 表示匿名的
    copy(text.begin(), text.end(), out);
    cout << endl;
  
    copy(string3, string2, back_insert_iterators<vector<string>> (text)); // back_insert_iterators<type> name(插入到什麼東西中)
    copy(text.begin(), text.end(), out);
    cout << endl;
  
    return 0
}
