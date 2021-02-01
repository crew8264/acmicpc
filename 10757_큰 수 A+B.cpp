#include <stdio.h>
#include <string.h>
#define asd(X) (X==0?0:X-'0')

char a[100000], b[100000], S[100000];

void reverse(char *arr, int len) {
    char tmp;
    
    for(int i = 0; i < len / 2; i++) {
        tmp = arr[i];
        arr[i] = arr[len -1 -i];
        arr[len -1 -i] = tmp;
    }
    return;
}

char * add(char * A, char * B) {
    int len = 0, par = 0;
    
    if(strlen(A) > strlen(B))
        len = strlen(A);
    else
        len = strlen(B);
        
        reverse(A, strlen(A));
        reverse(B, strlen(B));
        
        for(int i = 0; i <= len; i++) {
            S[i] = (asd(A[i]) + asd(B[i]) + par) % 10 + '0';
            if((asd(A[i]) + asd(B[i]) + par) > 9) par = 1;
            else par = 0;
        }
        
        if(S[len] == '0') S[len] = 0;
        reverse(S, strlen(S));
        
        return S;
    
}



int main()
{
    scanf("%s %s", a, b);
    printf("%s\n", add(a, b));
    
    return 0;
}