#include <iostream>
#include <cstdlib>
using namespace std; 


int main() { 

    int *p;
    int A[5] = {10,20,30,40,50};
    p = A;


   for(int i=0; i<5; i++) { 
    cout << "array :" << p[i] << endl;

   }

   delete p;
   return 0;

}