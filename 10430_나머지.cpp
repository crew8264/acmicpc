#include <stdio.h>

int main() {
    int A, B, C;
    int ans;
    
    scanf("%d %d %d", &A, &B, &C);
    
    ans = (A+B)%C;
    printf("%d\n", ans);
    
    ans = ((A%C) + (B%C))%C;
    printf("%d\n", ans);
    
    ans = (A*B)%C;
    printf("%d\n", ans);
    
    ans = ((A%C) * (B%C))%C;
    printf("%d\n", ans);
    
}
