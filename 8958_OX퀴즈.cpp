/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    int num = 0;
    scanf("%d",&num);
    
    char String[80];
    for(int i = 0; i < num; i++) {
        scanf("%s", String);
        
        int count = 0;
        int score = 0;
        
        for(int i = 0; i < strlen(String); i++) {
            if(String[i] == '\n') { break; }
            
            if(String[i] == 'O') {
                count++;
                score += count;
                //printf("C : %d, S : %d\n", count, score);
                
            }
            if(String[i] == 'X') { count = 0; }
        }
        
        printf("%d\n", score);
    }
    
    return 0;
}
