#include <stdio.h>

int main()
{
    int A, B, C, total, div;
    int arr[10] = {0,};
    
    scanf("%d %d %d", &A, &B, &C);
    total = A * B * C;
    
    for(int i = 0; total > 0; i++) {
        div = total % 10;
        arr[div] += 1;
        total = total / 10;
    }
    
    for(int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
}