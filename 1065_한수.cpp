#include <stdio.h>

int Han(int n){
    int i, count = 0, fst, sec, trd;
    if (n < 100)
        return n;
    else{
        for (i = 100; i <= n; i++){
        fst = i/100;
        sec = (i%100)/10;
        trd = (i%100)%10;
         if ((fst - sec) == (sec - trd))
             count++;
        }        
        return (99+count);
    }
}

int main(){
    int input, ans;
    scanf("%d", &input);
    ans = Han(input);
    printf("%d", ans);
    
    return 0;
}