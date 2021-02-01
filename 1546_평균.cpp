/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num = 0, max = 0;
    scanf("%d",&num);
    
    float arr[num];
    for(int i = 0; i < num; i++) {
        scanf("%f", arr + i);
        //printf("%\n", arr[i]);
        
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    //printf("%d\n", max);
    
    for(int i = 0; i < num; i++) {
            arr[i] = arr[i] / max * 100;
        //printf("arr[i] : %f\n", arr[i]);
    }
    
    float avg = 0;
    for(int i = 0; i < num; i++) {
        avg += arr[i];
    }
    //printf("%d\n", avg);
    avg /= num;
    
    printf("%f\n", avg);
    
    return 0;
}
