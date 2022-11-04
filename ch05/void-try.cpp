/*
void* 型態的指標可以保存指向任何"非常數"資料型態的指標
void 指標又叫做範型指標
對指標取值的時候，要先做型態轉換，轉換成所要的型態
不能預知所指向的資料型態時，void 指標很有用
*/
#include <iostream>
using namespace std;

int main()
{
    int integer = 5;
    void *pointer;
    pointer = &integer; # pointer 指向 integer 而且 integer 是 int 型態 (不是常數型態)
  
    cout << "The value in the integer is "
         << *(static_cast<int *> (pointer)) << endl;
    # 先用 static_cast<int *> (pointer) 把 pointer 轉換成 int 型態
    # 再用間接存取運算子 * 來取值
  
    return 0
}
