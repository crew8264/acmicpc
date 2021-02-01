/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[10] = { 0, };
    int div[10] = { 0, };
    int ans = 0;
    
    for(int i = 0; i<10; i++) {
        
        scanf("%d",arr+i);
        div[i] = arr[i] % 42;
    }
    
    for(int i = 0; i < 10; i++) {
        int count = 0;
        for(int k = i + 1; k < 10; k++) {
            if(div[i] == div[k]) {
                count++;
            }
        }
        if(count == 0) { ans++; }
    }
    
    printf("%d\n", ans);
    return 0;
}
