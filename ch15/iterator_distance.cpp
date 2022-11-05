#include <iterator>
#include <vector>
#include <iostream>
using namespace std;

const int MAX = 4;

int main()
{
    int numbers_array[MAX];
    vector<int> numbers_vector(MAX);
  
    for (int loop_index = 0; loop_index < MAX; loop_index++) {
        numbers_array[loop_index] = loop_index;
    }
  
    copy(numbers_array, numbers_array + MAX, numbers_vector.begin());
  
    vector<int>::iterator itr = numbers_vector.begin() + 2;
  
    vector<int>::difference_type itr_distance;
    distance(numbers_vector.begin(), itr, itr_distance); // 把 numbers_vector.begin() 到 itr 的距離填入 itr_distance
  
    cout << "The distance from the beginning to the iterators is: "
         << itr_distance << endl;
  
    return 0;
}
