#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    
    char String[num];
    scanf("%s", String);
    
    int ans = 0;
    for(int i = 0; i < num; i++) {
        ans += String[i] - '0';
    }
    
    printf("%d\n", ans);
    return 0;
}
