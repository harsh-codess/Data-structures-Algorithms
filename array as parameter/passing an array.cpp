#include <iostream> 
using namespace std; 

int * fun(int size) { 

int *p;
p = new int[size]; 
for ( int i = 0; i<size; i++) {
	p[i] = i+1;
}
return p;

}

int main() { 
 int *p1, szn;
 szn = 5;

 p1 = fun(szn);

 for (int i = 0; i<szn; i++) 
 cout << p1[i];
 
return 0;



}