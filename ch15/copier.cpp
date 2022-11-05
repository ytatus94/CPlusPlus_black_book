/*
iterator 有很多種:
iterator: 標準的 iterator
ostream_iterator: 處理 ostream
istream_iterator: 處理 istream
reverse_iterator: 從反方向
insert_iterator: 插入元素到容器中
front_insert_iterator: 從最前面插入元素到容器中
back_insert_iterator: 從最後面插入元素到容器中

要用 iterator 就要引用標頭檔 #include <iterator>
ostream_iterator<type1, type2> ostream_itr(cout, " ");
type1 是 iterator 處理的資料型態
type2 是 ostream 處理的資料型態
cout 表示要和輸出資料流 cout 相連
" " 表示輸出用空格隔開
*/
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

const int MAX = 5;

int main()
{
    int numbers_array[MAX];
    vector<int> numbers_vector(MAX); // 建立叫做 numbers_vector 的 vector 容器，容器內有 MAX 個 int 型態的元素
  
    for (int loop_index = 0; loop_index < MAX; loop_index++) {
        numbers_array[loop_index] = loop_index;
    }
  
    copy(numbers_array, numbers_array + MAX, numbers_vector.begin()); // copy(起點, 終點, 拷貝到哪裡去)
  
    ostream_iterator<int, char> ostream_itr(cout, " ");
  
    copy(numbers_vector.begin(), numbers_vector.end(), ostream_itr);
    cout << endl;
  
    return 0;
}
