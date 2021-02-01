#include <stdio.h>

int main()
{
    int inp = 0;
    scanf("%d", &inp);
    
    int counter = 0;
    while(inp > 0) {
        counter++;
        inp -= counter;
    }
    
    if(counter % 2 == 0)
        printf("%d/%d", counter + inp, 1 + (-inp));
    else
        printf("%d/%d", 1 + (-inp), counter +inp);
        
    return 0;
}
