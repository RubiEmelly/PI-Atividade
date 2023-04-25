#include <stdio.h>

int main() {
  int num;

  for (num >= 1000; num <= 1999; num++) {
    if (num % 11 == 5) {
      printf("%d\n", num);
    }
  }

  return 0;
}