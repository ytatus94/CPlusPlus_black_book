/*
和 ch15 的 stlfunctions.cpp 一模一樣的

for_each(起點的 iterator, 終點的 iterator, 要執行的函數)
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class person
{
    string name;
    int age;
public:
    person(string n, int a) {name = n; age = a;}
    friend bool compare_ages(const person & person1, const person & person2); // 友誼函數可以直接存取類別的成員
    friend bool operator<(const person & person1, const person & person2);
    friend void display(person p);
};

void display(person p)
{
    cout << "Name: " << p.name << " age: " << p.age << endl;
}

bool operator<(const person & person1, const person & person2)
{
    if (person1.name < person2.name)
        return true;
    else
      return false;
}

bool compare_ages(const person & person1, const person & person2)
{
    if (person1.age < person2.age)
        return true;
    else
        return false;
}

int main()
{
    vector<person> friends;

    friends.push_back(person("Ralph", 35));
    friends.push_back(person("Tom", 36));
    friends.push_back(person("Frank", 23));
    friends.push_back(person("Sally", 24));

    sort(friends.begin(), friends.end()); // 預設用 operator<() 指定的方式排序

    cout << "Sorted by name..." << endl;

    for_each(friends.begin(), friends.end(), display); // 把從起點到終點的所有元素都用 display 跑一次

    sort(friends.begin(), friends.end(), compare_ages); // 改成用 compare_ages() 指定的方式排序

    cout << "Sorted by age..." << endl;

    for_each(friends.begin(), friends.end(), display);

    random_shuffle(friends.begin(), friends.end()); // 洗牌，打亂排序

    cout << "Randomly shuffled..." << endl;

    for_each(friends.begin(), friends.end(), display);

    return 0;
}
