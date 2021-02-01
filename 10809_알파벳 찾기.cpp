#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char alp[26];
    for(int i = 0; i < 26; i++) {
        alp[i] = -1;
    }
    
    char String[100];
    scanf("%s", String);
    
    for(int i = 'a'; i <='z'; i++) {
        for(int k = 0; k < strlen(String); k++) {
            if(String[k] == i) {
                alp[String[k] - 'a'] = k;
                break;
            }
        }
    }
    
    for(int i = 0; i < 26; i++) {
        printf("%d ", alp[i]);
    }
    
}
