#include <stdio.h>
#include <string.h>

int main() {
    char String[101];
    scanf("%s", String);
    int len = strlen(String);
    
    int counter = 0;
    for( int i = 0; i < len; i++ ){
        if( String[i] == 'c' ){
            if( String[i+1] == '=' || String[i+1] == '-' )
                i++;
        }
        
        else if( String[i] == 'd' ){
            if( String[i+1] == 'z' && String[i+2] == '=' )
                i += 2;
            else if( String[i+1] == '-' )
                i++;
        }
            
        else if( String[i] == 'l' || String[i] == 'n' ){
            if( String[i+1] == 'j' )
                i++;
        }
        
        else if( String[i] == 's' || String[i] == 'z' ){
            if( String[i+1] == '=' )
                i++;
        }
        counter++;
    }
    printf("%d\n", counter);
    return 0;
}