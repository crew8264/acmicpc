#include <stdio.h>
#include <string.h>

int main()
{
    char String[1000000];
    scanf("%s", String);
    int len = strlen(String);
    
    int alp[26] = { 0, };
    for(int i = 'a'; i <= 'z'; i++) {
        for(int k = 0; k < len; k++) {
            if(i == String[k])
                alp[i - 'a']++;
        }
    }
    for(int i = 'A'; i <= 'Z'; i++) {
        for(int k = 0; k < len; k++) {
            if(i == String[k])
                alp[i - 'A']++;
        }
    }
    
    
    
    int max = alp[0];
    int select = 0;
    int ans = 0;
    for(int i = 1; i < 26; i++) {
        //printf("alp[%d] : %d\n",i , alp[i]);
        if(max < alp[i]) {
            max = alp[i];
            select = i;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(max == alp[i])
            ans++;
    }
    
    if(ans > 1){ printf("?\n"); }
    else { printf("%c", select+'A'); }
        
    return 0;
}
