#include <iostream>
#include <string>
using namespace std;

int main()
{
    string string1("No ");
    string string2;
  
    string2 = "problems";
  
    string string3 = string1 + string2;
  
    cout << string3 << endl;
  
    string3 += " at all.";
  
    cout << string3 << endl;
  
    return 0
}
