/*
auto_ptr 只有一個用處，就是保證 new 配置的記憶體會自動釋放
  當超出範圍的時候會自動刪除空間，不需要再使用 delete
要用 auto_ptr 要包含標頭檔 #include <memory>
語法: auto_ptr<type> name (new type)
*/
#include <iostream>
#include <memory>
#include <string>
using namespace std;

class person
{
    string name;
public:
    person(string n): name(n) {} // 某種初始化的方式
    void display() {cout << "Name: " << name << endl;}
};

int main()
{
    auto_ptr<person> ralph(new person("Ralph")); // ralph 是一個指標，指向 new 出來的記憶體空間，這裡在 new 的時候順便初始化了
  
    auto_ptr<person> also_ralph = ralph;
  
    also_ralph->display(); // also_ralph 是指標，所以用 ->
  
    return 0;
}
