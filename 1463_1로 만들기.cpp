using namespace std;
#include <iostream>

int min(int A, int B) {
    return A < B ? A : B;
}

int main() {
    
    int X;
    scanf("%d", &X);
    int as[X+1];
    
    as[1] = 0;
    for(int i  = 2; i <= X; i++) {
        as[i] = as[i-1] + 1;
        
        if(i % 2 == 0) as[i] = min(as[i], as[i/2] + 1);
        if(i % 3 == 0) as[i] = min(as[i], as[i/3] + 1);
        
    }
    
    printf("%d\n", as[X]);
    
    return 0;
}

//1을 뺴는 계산부터 시작해서 작은 계산을 통해 미리 arr[i]에 (최대)값을 메모이제이션을 합니다.
    //2로 나누어 떨어지는지 3으로 나누어 떨어지는 경우에 앞에 계산한 
    //arr[i/2]와 arr[i/3]과  현재의 arr[i]와 비교를 하여
    //그 중 최소 값을 arr[i]에 다시 저장(메모이제이션)합니다.