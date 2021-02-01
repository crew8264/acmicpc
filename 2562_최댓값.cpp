#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[9];
    int max = INT_MIN, index = 0;
    
    for(int i = 0; i < 9; i++) {
        scanf("%d", arr+i);
        
        if(arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    
    
    printf("%d\n%d\n", max, index+1);

    return 0;
}
