#include <deque>
#include <string>
#include <iostream>
using namespace std;

deque<string> patients;

int main()
{
    cout << "Initializing patients..." << endl;
  
    patients.push_front("Frank");
    patients.push_front("Molly");
    patients.push_front("Tom");
    patients.push_front("Sally");
  
    deque<string>::iterators itr;
  
    itr = patients.begin();
    while (itr < patients.end())
        cout << *itr++ << endl;
  
    cout << "Third patient..." << endl;
  
    cout << patients[2] << endl;
  
    cout << "A new patient arrives..." << endl;
    patients.push_back("Kurt");
  
    itr = patients.begin();
    while (itr < patients.end())
        cout << *itr++ << endl;
  
    cout << "Seeing the first patient..." << endl;
    patients.pop_front();
  
    itr = patients.begin();
    while (itr < patients.end())
        cout << *itr++ << endl;
  
    return 0
}
