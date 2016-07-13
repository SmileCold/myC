#include <stdio.h>
#include <malloc.h>

#define M 1000000

char h;

void creat(int m, int n, char * f)
{
    int i = 0, t = 1;
    for (; i < m * n; i++)
    {
	scanf("%c", f + i);
	if (t == m)
	{
	    while((h = getchar()) != '\n' && h !=EOF);
	    t = 1;
	}
	else
	{
	    t++;
	}
    }
}

void exchangea(int m, int b, int c, char * f)
{
    char mid;
    int i, j;
    for (i = 0; i < m; i++)
    {
        mid = f[(b - 1) * m + i];
        f[(b - 1) * m + i] = f[(c - 1) * m + i];
	f[(c - 1) * m + i] = mid;
    }
}

void exchangev(int m, int n, int b, int c, char * f)
{
    char mid;
    int i, j;
    for (i = 0; i < n; i++)
    {
        mid = f[i * m + b - 1];
        f[i * m + b - 1] = f[i * m + c - 1];
        f[i * m + c - 1] = mid;
    }
}

void prin(int m, int b, int c, char * f)
{
    switch (f[(b - 1) * m + c - 1])
    {
    case 'T':
	printf("Tree\n");
	break;
    case 'i':
	printf("Phone\n");
	break;
    default:
	printf("Empty\n");
	break;
    }
}

void mak(int m, int n, int a, int b, int c, char * f)
{
    switch (a)
    {
    case 1:
	prin(m, b, c, f);
	break;
    case 2:
	exchangea(m, b, c, f);
	break;
    case 3:
      exchangev(m, n, b, c, f);
	break;
    default:
	break;
    }
}

int main()
{
    int m, n, flag = 1, num, a, b, c, sum = 0;
    char * f;
    while (flag == 1)
    {
	if (feof(stdin) || ferror(stdin)) break;
	sum++;
	scanf("%d%d", &m, &n);
	if (feof(stdin) || ferror(stdin)) break;
	while((h = getchar()) != '\n' && h !=EOF);
	if (m < 0 || n < 0) break;
	f = (char * )malloc(m * n * sizeof(char));
	creat(n, m, f);
	scanf("%d", &num);
	while((h = getchar()) != '\n' && h !=EOF);
	int i = 0;
	printf("Case #%d:\n", sum);
	for (; i < num; i++)
	{
	    scanf("%d%d%d", &a, &b, &c);
	    while((h = getchar()) != '\n' && h !=EOF);
	    mak(m, n, a, b, c, f);
	}
    }
    return 0;
}
