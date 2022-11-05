/*
和 ch15 的 vector.cpp 一模一樣
常用的方法:
push_back
pop_back
insert
clear
resize
assign
front
back
erase
[]
at
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

    for (unsigned int loop_index = 0; loop_index < scores.size(); loop_index++) {
        running_sum += scores(loop_index);
    }

    cout << "The average student score is: "
         << running_sum / scores.size() << endl;
  
    return 0;
}
