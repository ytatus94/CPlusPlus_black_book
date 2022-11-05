/*
iterator 有很多種:
iterator: 標準的 iterator
ostream_iterator: 處理 ostream
istream_iterator: 處理 istream
reverse_iterator:
insert_iterator:
front_insert_iterator:
back_insert_iterator:

要引用標頭檔 #include <iterator>
ostream_iterator<type1, type2> ostream_itr(cout, " ");
type1 是 iterator 處理的資料型態
type2 是 ostream 處理的資料型態
cout 表示要和輸出資料流 cout 相連
" " 表示用空格隔開
*/
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

const int MAX = 5;

int main()
{
    int numbers_array[MAX];
    vector<int> numbers_vector(MAX);
  
    for (int loop_index = 0; loop_index < MAX; loop_index++) {
        numbers_array[loop_index] = loop_index;
    }
  
    copy(numbers_array, numbers_array + MAX, numbers_vector.begin());
  
    ostream_iterator<int, char> ostream_itr(cout, " ");
  
    copy(numbers_vector.begin(), numbers_vector.end(), ostream_itr);
    cout << endl;
  
    return 0;
}
