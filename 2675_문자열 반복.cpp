#include <stdio.h>
#include <string.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++) {
        int alp = 0;
        scanf("%d", &alp);
        
        char String[alp];
        scanf("%s", String);
        
        for(int k = 0; k < strlen(String); k++) {
            for(int j = 0; j < alp; j++) {
                printf("%c", String[k]);
            }
        }
        printf("\n");
    }
    return 0;
}
