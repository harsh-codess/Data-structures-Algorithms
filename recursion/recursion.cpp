#include <stdio.h> 
void func(int n) 
{ 
    if ( n > 0 ) 
    { 
        printf("%d ", n); 
        func(n - 1); 
    }
}

int main() { 
    int x =3;
    func(x);
    return 0;
}