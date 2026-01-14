#include <cstdio>
#include <iostream>
using namespace std;

int function(int n) 
{ 
    static int x = 0; 
     if (n>0)
     { 
            x++; 
            return function(n-1) + x;
     }
     return 0;
     }
int main() 
{ 
    int result; 
    int n = 5; 
    result = function(n); 
    printf("The result is %d\n", result); 
    return 0; 
}