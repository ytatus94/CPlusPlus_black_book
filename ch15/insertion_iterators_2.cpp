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
  
    // insert_iterators<vector<string>>(text, text.begin() + 2)
    // 和 inserter(text, txt.begin() + 2) 是一樣的
    copy(string2, string1, inserter(text, txt.begin() + 2));
    copy(text.begin(), text.end(), out);
    cout << endl;
  
    // back_insert_iterators<vector<string>> (text)
    // 和 back_inserter(text) 是一樣的
    copy(string3, string2, back_inserter(text));
    copy(text.begin(), text.end(), out);
    cout << endl;
  
    return 0
}
