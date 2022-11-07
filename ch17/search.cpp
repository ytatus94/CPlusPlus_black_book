/*
search() 找不到時，就傳回空字串的 iterator
*/
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char * text = "Hello from C++.";
    char * to_find = "C++";

    char * location = search(text, text + strlen(text), to_find, to_find + strlen(to_find));

    if (*location == '\0')
        cout << "Could not find \"C++\" in \"Hello from C++.\"" << endl;
    else
        cout << "Found \"C++\" in \"Hello from C++\" at location " << (location - text) << endl;

    return 0;
}
