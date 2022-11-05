#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<8> flags; // 建立名叫 flags 的 8 bits 的 bitset
  
    flag |= 7; // 7 的 2 進位表示 00000111 (因為要 8 bits 所以不足的就補上 0)
  
    cout << flags << endl;
  
    if (flags[2]) {
        cout << "Bit 2 is set" << endl;
    }
  
    return 0;
}
