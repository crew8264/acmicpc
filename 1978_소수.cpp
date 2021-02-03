

using namespace std;
#include <iostream>
#include <string.h>

int checker(int arr[], int i) {
    if(arr[i] < 2) {
        return 0;
    }
    for(int j=2; j < arr[i]; j++){
            if(arr[i] % j == 0) 
            return 0;
            
        }
    
    //printf("%d\n", i);
    return 1;
}

int main() {
    
    int N = 0;
    scanf("%d", &N);
    fgetc(stdin);
    
    int arr[N], counter = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", arr + i);
        //printf("i: %d\n", i);
        counter += (checker(arr, i));
    }

        
    printf("%d\n", counter);
    return 0;
    
}