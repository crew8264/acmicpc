#include <stdio.h>

int main(void) {
  int A = 0;

  scanf("%d", &A);
  
  if((100 >= A) && (A >= 90)) {
    printf("A\n");
  } else if((90 > A) && (A >= 80)) {
    printf("B\n");
  } else if((80 > A) && (A >= 70)) {
    printf("C\n");
  } else if((70 > A) && (A >= 60)) {
    printf("D\n");
  } else {
    printf("F\n");
  }


  return 0;
}