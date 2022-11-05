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
    person(string n, int a) {name = n, age = a
};

int main()
{
    vector<person> friends;
  
    friends.push_back(person("Ralph", 35));
    friends.push_back(person("Tom", 36));
    friends.push_back(person("Frank", 23));
    friends.push_back(person("Sally", 24));
  
    vector<person>::iterator p;
    for (p = friends.begin(); p != friends.end(); p++)
        p->display();
  
    # erase(start, end)
    friends.erase(friends.begin() + 1, friends.begin() + 2);
  
    cout << "Got rid of one friends..." << endl;
  
    for (p = friends.begin(); p != friends.end(); p++)
        p->display();

    # insert(p, t) 在 p 前面插入 t
    vector<person> nancys_friends;
  
    nancys_friends.push_back(person("Tina", 35));
    nancys_friends.push_back(person("Buddy", 36));

    friends.insert(friends.begin(); nancys_friends.begin() + 1, nancys_friends.begin() + 2);
  
    cout << "Added two new friends..." << endl;

    for (p = friends.begin(); p != friends.end(); p++)
        p->display();

    # swap()
    nancys_friends.swap(friends);
    cout << "Swapping your friends with Nancy's..." << endl;
  
    for (p = friends.begin(); p != friends.end(); p++)
        p->display();
  
    return 0;
}
