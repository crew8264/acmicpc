#include <stdio.h>
#include <string.h>

char * strtok(char str[], const char *delims);

int main()
{
    char String[1000000];
    char* token;
    int count = 0;
    
    fgets(String, sizeof(String), stdin);
    token = strtok(String, " \n");
    
    while(token != NULL) {
        count++;
        token = strtok(NULL, " \n");
    }
    printf("%d", count);
    return 0;
}
