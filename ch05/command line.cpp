/*
argc 是命令列參數的數目，包括程式名
  若 argc = X 則 argv[0] 是命令本身 argv[1] ~ argv[X-1] 是剩下的參數
argv 是指向 char 陣列的指標，char 陣列存有命令列參數
  char * argv[] 和 char ** argv 一樣
  char ** argv 看作 (char *)(* argv) 而 *argv = argv[]

*/
#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
    for (int loop_index = 0; loop_index < argc; loop_index++) {
        cout << argv[loop_index] << endl;
    }
  
    return 0;
}
