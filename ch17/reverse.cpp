/*
reverse(起點的指標，終點的指標)
*/
#include <algorithm>
#include <iostream>
#include <cstring> // 要用 strlen()
using namespace std;

int main()
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

    reverse(alphabet, alphabet + strlen(alphabet));

    cout << alphabet << endl;

    return 0;
}
