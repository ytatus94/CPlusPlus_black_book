/*
(type) 舊的型態轉換方法
const_cast <type> (expression) 轉換掉常數型態
  expression 是常數，用 const_cast <type> 把常數性質拿掉
dynamic_cast <type> (expression) 在執行期識別由指標或參考指定的類別物件
  用做即時型態檢查 (RTTI)
reinterpret_cast <type> (expression) 對運算式的位元模式進行低階的重新解譯
  用 reinterpret_cast 可以將記憶體位置直接給定給指標
static_cast <type> (expression) 顯性型態轉換，不做即時型態檢查，關閉警告資訊
*/
#include<iostream>
using namespace std;

int main()
{
    int sum;
    int ten = 10;
    float pi = 3.14159;

    sum = static_cast <int> (pi) + ten;
  
    cout << "The integer sum = " << sum << endl;
  
    return 0;
}
