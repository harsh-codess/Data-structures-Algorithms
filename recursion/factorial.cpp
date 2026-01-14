#include <Stdio.h> 

fact(int n) 
{ 
    if (n <= 1) 
    return 1; 
    else 
    return fact(n-1)*n;

}
int main() { 
    int n = 5; 
    printf("factoral of %d = %d,", n, fact(n));
    return 0;       


}