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
    vector<double> scores(NUMBER_STUDENTS); // 建立一個叫做 scores 的 vector 容器，內部有 NUMBER_STUDENTS 個 double 型態的元素，目前每個元素都是空的

    double running_sum = 0;

    scores[0] = 89.0; // 這裡為 scores 的每個元素賦予值
    scores[1] = 29.0;
    scores[2] = 59.0;
    scores[3] = 79.0;

    for (unsigned int loop_index = 0; loop_index < scores.size(); loop_index++) // scores.size() 會傳回元素的數目
    {
        running_sum += scores[loop_index];
    }
  
    cout << "The average student score is: "
         << running_sum / scores.size() << endl;
}
