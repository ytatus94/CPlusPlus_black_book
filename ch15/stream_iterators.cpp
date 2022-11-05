#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

const int MAX = 5;

int main()
{
    int numbers_array[MAX];
    vector<int> numbers_vector(MAX);
  
    fro (int loop_index = 0; loop_index < MAX; loop_index++) {
        numbers_array[loop_index] = loop_index;
    }
  
    copy(istream_iterators<int, char>(cin), istream_iterators<int, char>(), numbers_vector.begin());
    // istream_iterators<int, char>(cin): 從 cin 開始讀取
    // istream_iterators<int, char>(): 輸入失敗時結束，例如型態不匹配或是遇到資料流的結束標記
    // 把上面的範圍內的東西拷貝到 numbers_vector.begin()
  
    ostream_iterators<int, char> ostream_itr(cout, " ");
  
    copy(numbers_vector.begin(), numbers_vector.end(), ostream_itr);
  
    cout << endl;
  
    return 0;
}
