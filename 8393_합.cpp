#include <stdio.h>

int main()
{
    int k, sum = 0;
    
    scanf("%d", &k);
    for(int i = 1; i<=k; i++) {
        sum += i;
    }
    printf("%d", sum);
    
    return 0;
}
