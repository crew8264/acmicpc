using namespace std;
#include <iostream>

int main() {
    
    int num = 0;
    scanf("%d", &num);
    
    for(int i = num; i > 0; i--) {
        for(int j = 0; num-i > j; j++)
            printf(" ");
        
        for(int j = i; j > 0; j--)
            printf("*");
    printf("\n");
    }
    
    return 0;
}
