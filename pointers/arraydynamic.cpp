#include <iostream> 
#include <cstdlib>
using namespace std; 




int main() { 
     int *p; 
     p = new int[5] {2,4,6,8,10};


     for(int i = 0; i<5; i++) { 
        cout << "array :" << p[i] << endl; 


     }
     return 0;

}