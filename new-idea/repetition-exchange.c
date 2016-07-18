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

int fctral(int num);
int cbntin(int rsp, int ssp);
int arrang(int rsp, int ssp);
int argnum(int num);
int * grpnum(int num, int cnu, int cmn);
int ** estarg(int argn, int num);

int main(void)
{
  int argn;
  int ** arg, **** exg, * grp;
  rel ** relh;
  argn = argnum(M);
  grp = grpnum(M, N, G);
  arg = estarg(argn, M);
  exg = estexg(N, grp, G);
  relh = estrelh(argn);
  relargexg(arg, exg, M, N, argn, grp, G, relh);
  prin(arg, argn, relh, exg, G, grp, N, M, C);
  frerel(rel, argn);
  freexg(exg, N, grp, G);
  frearg(arg, argn, M);
  fregrp(grp, N);
  return 0;
}

int fctral(int num)
{
  int sum = 1, i;
  for (i = 2; i <= num; i++)
  {
    sum *= i;
  }
  return sum;
}

int cbntin(int rsp, int ssp)
{
  int fc1, fc2, fc3, ctn;
  fc1 = fctral(rsp);
  fc2 = fctral(ssp);
  fc3 = fctral(rsp - ssp);
  ctn = fc1 / fc2 / fc3;
  return ctn;
}

int arrang(int rsp, int ssp)
{
  int fc1, fc2, arg;
  fc1 = fctral(rsp);
  fc2 = fctral(ssp);
  arg = fc1 / fc2;
}

int argnum(int num)
{
  int prd;
  prd = fctral(num);
  return prd;
}

int * grpnum(int num, int cnu, int cmn)
{
  int i, j, pow;
  int * head, * pnt;
  pnt = head = (int *)malloc(cnu * sizeof(int));
  pow = cbntin(cnu, cmn);
  for (i = 1; i <= cnu; i++)
  {
    *pnt = 1;
    for(j = 0; j < i;j++)
    {
      (*pnt) *= pow;
    }
    pnt++;
  }
  return head;
}

int ** estarg(int argn, int num)
{
  int ** arg;
  arg = (int **)malloc(2 * sizeof(int *));
  arg[0] = (int *)malloc(argn * sizeof(int));
  arg[1] = (int *)malloc(argn * sizeof(int));
  
}
