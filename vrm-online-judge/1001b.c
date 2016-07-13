#include <stdio.h>

#define M 100
#define N 100

void prin(int b, int c, char f[][N])
{
    switch (f[b - 1][c - 1])
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

void exchangea(int m, int b, int c, char f[][N])
{
    int i;
    char d;
    for (i = 0; i < m; i++)
    {
        d = f[b - 1][i];
        f[b - 1][i] = f[c - 1][i];
        f[c - 1][i] = d;
    }
}

void exchangel(int n, int b, int c, char f[][N])
{
    int i;
    char d;
    for (i = 0; i < n; i++)
    {
        d = f[i][b];
        f[i][b - 1] = f[i][c - 1];
        f[i][c - 1] = d;
    }
}


void mag(int m, int n, int a, int b, int c, char f[][N])
{
    switch (a)
    {
    case 1:
	prin(b, c, f);
	break;
    case 2:
	exchangea(m, b, c, f);
	break;
    case 3:
	exchangel(n, b, c, f);
	break;
    default:
	break;
    }
}

int main()
{
    int m, n;
    char f[M][N], h;
    int num, sum = 0;
    int a, b, c;
    while (1)
    {
	sum++;
	scanf("%d%d", &m, &n);
	while ((h = getchar()) != '\n' && h != EOF);
	if (m < 0 || n < 0) break;
	printf("Case: #%d\n", sum);
	int i;
	for (i = 0; i < m; i++)
	{
	    int j;
	    for (j = 0; j < n; j++)
	    {
		scanf("%c", &f[i][j]);
	    }
	    while ((h = getchar()) != '\n' && h != EOF);
	}
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
	scanf("%d%d%d", &a, &b, &c);
	mag(m, n, a, b, c, f);
        while ((h = getchar()) != '\n' && h != EOF);
	}
    }
    return 0;
}
