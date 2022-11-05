#include <iostream>
#include <valarray>
using namespace std;

int main(void)
{
    valarray<int> valarray1(10);
    valarray<int> valarray2(10);

    for (int loop_index = 0; loop_index < 10; loop_index++) {
        valarray1[loop_index] = loop_index;
        valarray2[loop_index] = loop_index;
    }

    cout << "Original valarrays..." << endl;
    for (unsigned int i = 0; i < valarray1.size(); i++)
        cout << valarray1[i] << ' ';
    cout << endl;
    for (unsigned int i2 = 0; i2 < valarray2.size(); i2++)
        cout << valarray2[i2] << ' ';
    cout << endl;

    valarray1 += valarray2;

    cout << "Sum of valarrays..." << endl;
    for (unsigned int i3 = 0; i3 < valarray1.size(); i3++)
        cout << valarray1[i3] << ' ';
    cout << endl;

    valarray2 *= 3;

    cout << "First valarray x 3..." << endl;
    for (unsigned int i4 = 0; i4 < valarray2.size(); i4++)
        cout << valarray2[i4] << ' ';
    cout << endl;
  
    return 0;
}
