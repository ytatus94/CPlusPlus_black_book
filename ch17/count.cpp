/*
count(起點的 iterator, 終點的 iterator, 要計算次數的東西)
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> words;

    words.push_back("Hello");
    words.push_back("Hello");
    words.push_back("there");

    cout << "The word \"Hello\" appears "
         << count(words.begin(), words.end(), "Hello")
         << " times." << endl;

    return 0;
}
