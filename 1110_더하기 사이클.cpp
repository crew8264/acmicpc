#include <stdio.h>

int main()
{
    int n, first, next, count = 0;
    
    scanf("%d", &n);
    first = n;
    
    while(1){
        next = (n/10 + n%10)%10 + (n%10)*10;
        n = next;
        count++;
        
        if(first == next)
            break;
    }
    
    printf("%d\n", count);
    
}
