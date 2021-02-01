#include <stdio.h>

int main()
{
    int k, n, n2 = 0;
    
    scanf("%d", &k);
        for(int i = 0; i<k; i++) {
        scanf("%d %d",&n, &n2);
        printf("%d\n",n+n2);
    }
    
    return 0;
}
