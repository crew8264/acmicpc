#include <stdio.h>
#include <string.h>

bool Checker(char String[]) {
    bool alp[26] = { false, };
    int len = strlen(String);
    
    alp[String[0] - 'a'] = true;
    for(int i = 1; i < len; i++) {
        //printf("Try %d: %c\n", i, String[i]);
        if(String[i-1] == String[i])
            continue;
        else
            if(alp[String[i] - 'a'] == true) {
                return true;
            }
            alp[String[i] - 'a'] = true;
    }
    
    return false;
    
}

int main() {
    int num = 0;
    scanf("%d", &num);
    
    int counter = 0;
    for( int i = 0; i < num; i++ ){
        char String[101];
        scanf("%s", String);
        
        if(!Checker(String))
            counter++;
        
        //printf("counter : %d\n", counter);
    }
    
    printf("%d\n", counter);
    return 0;
}