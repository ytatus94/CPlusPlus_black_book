/*
find(): 找子字串或字元
rfind(): 反向尋找
find_first_of(): 找第一個出現的
find_last_of(): 找最後一個出現的
find_first_not_of():
find_last_not_of():
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

int main()
{
    string s = "Hello from C++.";
  
    cout << "The string is: " << s << endl;
  
    cout << "String length: " << s.length() << endl;
  
    unsigned int loc = s.find('C');
    if (loc == string::npos) { // string::npos 表示找不到
        cout << "Not found" << endl;
    }
    else {
        cout << "Found \'C\' at location: " << loc << endl;
    }
  
    loc = s.find("C++");
    if (loc == string::npos) {
        cout << "Not found" << endl;
    }
    else {
        cout << "Found \"C++\" at location: " << loc << endl;
    }
  
    return 0;
}
