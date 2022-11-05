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
      
    ostream_iterators<int, char> ostream_itr(cout, " ");
  
    copy(numbers_vector.begin(), numbers_vector.end(), ostream_itr);
    cout << endl;
  
    // 隱性地使用逆轉 iterators 來逆序顯示 vector 中的資料
    copy(numbers_vector.rbegin(), numbers_vector.rend(), ostream_itr);
    cout << endl;
  
    // 顯性地宣告並使用逆轉 iterators
    vector<int>::reverse_iterators reverse_itr;
    for (reverse_itr = numbers_vector.rbegin(); reverse_itr != numbers_vector.rend(); ++reverse_itr)
        cout << *reverse_itr << " ";
  
    cout << endl;
  
    return 0;
}
