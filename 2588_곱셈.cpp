#include <stdio.h>

int main() {
    int inp1, inp2;
    int out1, out2, out3, ans;
    
    scanf("%d %d", &inp1, &inp2);
    
    out1 = inp1 * (inp2%10);
    out2 = inp1 * ((inp2%100)/10);
    out3 = inp1 * (inp2/100);
    
    ans = inp1 * inp2;
    
    printf("%d\n", out1);
    printf("%d\n", out2);
    printf("%d\n", out3);
    
    printf("%d\n", ans);
    
}

