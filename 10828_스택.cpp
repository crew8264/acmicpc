

using namespace std;
#include <iostream>
#include <string.h>

int checker(int arr[]) {
    int counter = 0;
    while(1) {
        if(arr[counter] == 0) {
            //EX
            //printf("checker done\n");
            return counter;
        }
        counter++;
    }
}

void push(int arr[], int num) {
    arr[checker(arr)] = num;
    
    //EX
    //printf("push done\n");
    return;
}

void pop(int arr[]) {
    
    if(checker(arr) == 0) {
        printf("-1\n");
        //EX
        //printf("pop1 done\n");
        return;
    }
    printf("%d\n", arr[checker(arr)-1]);
    arr[checker(arr)-1] = 0;
    
    //EX
    //printf("pop2 done\n");
    return;
}

void size(int arr[]) {
    printf("%d\n", checker(arr)+1-1);
    
    //EX
    //printf("size done\n");
    return;
}

void empty(int arr[]) {
    if(checker(arr) == 0)
        printf("1\n");
    else
        printf("0\n");
    
    //EX
    //printf("empty done\n");
    return;
}

void top (int arr[]) {
    if(checker(arr) == 0) {
        printf("-1\n");
        
        //EX
        //printf("top1 done\n");
        return;
    }
    
    printf("%d\n", arr[checker(arr)-1]);
    
    //EX
    //printf("top2 done\n");
    return;
}


int main() {
    
    int num = 0;
    scanf("%d", &num);
    
    int arr[100000] = { 0, };
    for(int i = 0; i < num; i++) {
        char comm[6];
        int input = 0;
        
        scanf("%s", comm);
        fgetc(stdin);
        //printf("%s %d\n",comm, input);
        
        if(!strcmp(comm, "push")) { scanf("%d", &input); push(arr, input); }
        else if(!strcmp(comm, "pop")) pop(arr);
        else if(!strcmp(comm, "size")) size(arr);
        else if(!strcmp(comm, "empty")) empty(arr);
        else if(!strcmp(comm, "top")) top(arr);
        
        //printf("%d회차\n", i);
        
    }
    
    return 0;
    
}