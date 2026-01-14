#include <stdio.h>

int sum(int n) 
{ 
    if (n == 0) 
        return 0; 
    
    else
        return n + sum(n - 1);
}
int main() 
{ 
    int n = 5; 
    printf("Sum of first %d natural numbers is %d\n", n, sum(n)); 
    return 0; 
}