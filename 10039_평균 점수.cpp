
using namespace std;
#include <iostream>

int main() {
    
    int as[5];
    for(int i = 0; i < 5; i++) {
        scanf("%d", as + i);
    }
    
    int avg = 0;
    for(int i = 0; i < 5; i++) {
        if(as[i] < 40)
            as[i] = 40;
        avg += as[i];
    }
    
    avg /= 5;
    printf("%d\n", avg);
    
}