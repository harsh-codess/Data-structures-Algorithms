#include <stdio.h> 
void funcA(int n);
void funcB(int n) 
{ 
    if ( n > 0 ) 
    { 
        printf("%d ", n); 
        funcA(n - 1); 
    }
}
void funcA(int n) 
{ 
    if ( n > 0 ) 
    { 
        printf("%d ", n); 
        funcB(n - 1); 
    }
}
int main() { 
    int x =20;
    funcA(x);
    return 0;
}
