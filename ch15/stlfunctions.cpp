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
    friend bool compare_ages(const person & person1, const person & person2);
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
  
    # 依人名排序
    sort(friends.begin(), friends.end());
  
    cout << "Sorted by name..." << endl;
  
    for_each(friends.begin(), friends.end(), display);
  
    # 用 compare_ages 依年齡排序
    sort(friends.begin(), friends.end(), compare_ages);
  
    cout << "Sorted by age..." << endl;
  
    for_each(friends.begin(), friends.end(), display);
  
    # 洗牌
    random_shuffle(friends.begin(), friends.end());
  
    cout << "Randomly shuffled..." << endl;
  
    for_each(friends.begin(), friends.end(), display);
  
    return 0;
}
