#include <stdio.h>
#include <malloc.h>

#define M 3
#define N 4
#define G 2
#define C 2

typedef struct relevance
{
  cdn[C];
  struct relevance * next;
}rel;


int argnum(int num);
void grpnum(int * grp, int num, int cnu, int cmn);

int main(void)
{
  int argn;
  int ** arg, **** exg, * grp;
  rel ** relh;
  argn = argnum(M);
  grpnum(grp, M, N, G);
  estarg(arg, argn, M);
  estexg(exg, N, grp, G);
  estrelh(relh, argn);
  relargexg(arg, exg, M, N, argn, grp, G, relh);
  prin(arg, argn, relh, exg, G, grp, N, M, C);
  frerel(rel, argn);
  freexg(exg, N, grp, G);
  frearg(arg, argn, M);
  fregrp(grp, N);
  return 0;
}

int argnum(int num)
{
  int i, prd = 1;
  for (i = 1; i <= num; i++)
  {
    prd *= i;
  }
  return prd;
}

void grpnum(int * grp, int num, int cnu, int cmn)
{
  int i;
  grp = (int *)malloc(cnu * sizeof(int));
  for (i = 1; i < cnu; i++)
  {
    
  }
}
