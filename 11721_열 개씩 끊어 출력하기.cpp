

using namespace std;
#include <iostream>
#include <string.h>


int main() {
    char String[101];
    scanf("%s", String);
    
    int len = strlen(String);
    for(int i = 0; i < len; i++) {
        if((i % 10 == 0) && (i != 0)) printf("\n");
        printf("%c", String[i]);
    }
    return 0;
    
}