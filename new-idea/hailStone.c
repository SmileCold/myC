#include<stdio.h>

void hailStone(int a)
{
  while (a > 1)
  {
    printf("%d, ", a);
    a = a % 2 ? a * 3 + 1 : a / 2;
  }
  printf("1;\n");
}

int main()
{
  int i = 1, flag = 1;
  while (flag)
  {
    hailStone(i);
    printf("Continue?\n");
    scanf("%d", &flag);
    i++;
  }
  return 0;
}
