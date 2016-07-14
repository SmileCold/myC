#include <stdio.h>

#define N 

typedef struct
{
  int a;
  int b;
}ex;

typedef struct equal
{
  ex * a;
  struct equal * b;
}eq;

void exchange(int * a, ex * b)
{
  int mid;
  mid = a[b->a];
  a[b->a] = a[b->b];
  a[b->b] = mid;
}

void equ(int a[][3], int n, )
{
  
}

void test(void)
{
  
}

int main(void)
{
  test();
  return 0;
}
