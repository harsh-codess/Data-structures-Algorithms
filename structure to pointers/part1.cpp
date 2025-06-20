#include <iostream>
using namespace std; 


int main() { 
        struct rectangle { 
            int breadth; 
            int length;

        };

         rectangle r;
         rectangle *p;
         p = &r;

        r.length = 15;
        p->length = 20;


        p->breadth = 69;

        cout << r.length;
        cout << p->breadth;

}