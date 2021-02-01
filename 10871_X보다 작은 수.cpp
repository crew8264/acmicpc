#include <stdio.h>

int main()
{
    int n, x, jud;
    
    scanf("%d %d", &n, &x);
    for(int i = 0; i < n; i++) {
        scanf("%d", &jud);
        if(jud < x) {
            printf("%d ", jud);
        }
    }
    
    return 0;
}