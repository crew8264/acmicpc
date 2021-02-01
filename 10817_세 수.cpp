#include <stdio.h>

void bubble_sort(int arr[], int len) {
    int tmp = 0;
    
    for(int i = len-1; i > 0; --i) {
        for(int  j = 0; j < i; ++j) {
            if(arr[j] < arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = tmp;
            }
        }
    }
}


int main()
{
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    
    bubble_sort(arr, 3);
    printf("%d\n", arr[1]);

    return 0;
}
