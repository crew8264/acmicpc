

using namespace std;
#include <iostream>
#include <string.h>

int factorial(int n) {
    if(n == 1)
        return 1;
        
    return n * factorial(n-1);
}

int main() {
    
    int N = 0;
    scanf("%d", &N);
    
    printf("%d\n", factorial(N));
    return 0;
    
}