#include <stdio.h>
#include <string.h>

int main()
{
    int num = 0;
    scanf("%d",&num);
    
    for(int i = 0; i < num; i++) {
        int head = 0;
        scanf("%d", &head);
        
        int arr[head];
        int avg = 0;
        for(int k = 0; k < head; k++) {
            scanf("%d", arr + k);
            avg += arr[k];
        }
        avg /= head;
        //printf("avg : %d\n", avg);
        
        int count = 0;
        for(int k = 0; k < head; k++) {
            if(arr[k] > avg) { count++; }
            //printf("count : %d\n", count);
        }
        //printf("count : %d\n", count);
        
        float ans = (float)count/(float)head*100;
        printf("%.3f\%\n", ans);
    }
    
    return 0;
}
