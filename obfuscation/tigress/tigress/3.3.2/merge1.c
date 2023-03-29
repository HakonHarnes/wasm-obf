#include "tigress.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fib(int n) {
  int a=0;
  int b=1;
  int s=1;

  int i;
  for (i=1; i<n; i++) {
    s=a+b;
    a=b;
    b=s;
  }
  printf("fib(%i)=%i\n",n,s);
}
