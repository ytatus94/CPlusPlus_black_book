/*
STL (標準樣版函式庫) 由容器 (containers)，迭代器 (iterators)，函數物件 (function objects 又叫 functors)，演算法 (algorithms) 構成
  containers: list (double linked list), queue, deque, priority_queue, stack, vector, map, multimap, set, multiset, bitset
  iterators: 一種在容器間移動並存取資料的指標
  functors: 自訂內建的程式碼來處理資料，可以是類別物件或函數指標
  algorithms:
  
vector <class T, class Allocator = allocator<T> >
*/

#include <iostream>
#include <vector>
using namespace std;

const int NUMBER_STUDENTS = 4;

int main()
{
    vector<double> scores(NUMBER_STUDENTS);

    double running_sum = 0;

    scores[0] = 89.0;
    scores[1] = 29.0;
    scores[2] = 59.0;
    scores[3] = 79.0;

    for (unsigned int loop_index = 0; loop_index < scores.size(); loop_index++)
    {
        running_sum += scores[loop_index];
    }
  
    cout << "The average student score is: "
         << running_sum / scores.size() << endl;
}
