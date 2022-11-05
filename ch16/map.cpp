#include <string>
#include <map>
#include <iostream>
using namespace std;

int main()
{
    map<string, int> ages; // 建立叫做 ages 的 map 容器，key 的資料型態是 string，value 的資料型態是 int
  
    ages["Ralph"] = 35;
    ages["Sally"] = 29;
    ages["Tom"] = 77;
    ages["Frank"] = 31;
    ages["April"] = 24;
    ages["Tina"] = 61;
  
    map<string, int>::iterator itr; // 建立指向 map<key_type, value_type> 型態的 iterator
  
    for (itr = ages.begin(); itr != ages.end(); itr++) {
        cout << itr->first << " is " << itr->second
             << " years old." << endl;
    }
  
    return 0;
}
