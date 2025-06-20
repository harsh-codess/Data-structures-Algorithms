#include <iostream> 
using namespace std; 


struct rectangle { 
    int length; 
    int breadth; 


};
int main() { 
rectangle r;
rectangle *p;
p =  &r;

p->length = 10;
p->breadth = 30;

cout <<p->breadth;
cout << p->length;


}