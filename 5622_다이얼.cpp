
#include <stdio.h>

int main(void)
{
    int alp[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
    int res = 0;    char String[16];
    
    scanf("%s", String);
    
    for(int i = 0; String[i] != '\0'; i++) {
        res += alp[String[i] - 'A'];
    }
    
    printf("%d\n", res);
    
    return 0;
    
}
