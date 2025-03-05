#include<stdio.h>
#include"swap.h"

int main(void){
  int a = 4;
  int b = 5;
  printf("before any swap -> a=%d, b=%d\n", a, b);
  swap1(a, b);
  printf("after swap1 -> a=%d, b=%d\n", a, b);
  swap2(&a, &b);
  printf("after swap2 -> a=%d, b=%d\n", a, b);
  return 0;
} 