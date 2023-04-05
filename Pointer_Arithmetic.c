#include<stdio.h>

int main() {
  double x = 4.5;
  double* ptr1 = &x;
  printf("%p\n", ptr1);
  

  // Increment pointer by five blocks. 5*8=40
  ptr1 += 5;
  printf("%p\n", ptr1);
  // Decrement pointer by four blocks. 
  ptr1 -=5;
  printf("%p\n", ptr1);
}
