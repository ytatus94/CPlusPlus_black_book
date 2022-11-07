/*
和 ch15 的 vector_iterators.cpp 一模一樣
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class person
{
    string name;
    int age;
public:
    void display() {cout << "Name: " << name << " age: " << age << endl;}
    person(string n, int a) {name = n; age = a;}
};

int main()
{
    vector<person> friends;

    friends.push_back(person("Ralph", 35));
    friends.push_back(person("Tom", 36));
    friends.push_back(person("Frank", 23));
    friends.push_back(person("Sally", 24));

    vector
}
