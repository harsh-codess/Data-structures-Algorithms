#include <iostream> 
using namespace std;

struct employees { 

    int empid; 
    char empname; 
    char empdept; 
    int empsalary; 
    
};


int main () { 

    struct employees e = { 1001, 'A', 'B', 50000 };
    cout << "size of structure: " << sizeof(e) << endl;
    cout << "employee details: ";
    cout << "empid = " << e.empid << ", ";
    cout << "empname = " << e.empname << ", ";
    cout << "empdept = " << e.empdept << ", ";
    cout << "empsalary = " << e.empsalary << endl;

// body



}