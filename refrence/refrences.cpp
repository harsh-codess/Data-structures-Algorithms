#include <iostream> 
using namespace std; 



int main() { 

 int a = 10; 
 int &r = a;


cout << "a: " << a << "\n";
r++;
cout << "r : " << r;


}