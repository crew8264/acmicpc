#include <stdio.h>

int main()
{
    long long inp = 0, range = 1, addic = 1; 
    int times = 1;
    scanf("%lld", &inp);
    
    while(1) {
        if(addic >= inp)
            break;
            
        range = 6 * times;
        times++;
        addic += range;
    }
    
    printf("%d\n", times);
    
    return 0;
}
