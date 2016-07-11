#include <stdio.h>
#include <stdlib.h>

typedef struct cha
{
    char a;
    struct sizeo * b;
}ch;

ch * creat(int x)
{
    int i = 0;
    ch * p, * q, * head;
    for (; i < x; i++){
	if (i == 0){
	    head = (ch *)malloc(sizeof(ch));
	    p = q = head;
	}else q = (ch *)malloc(sizeof(ch));
	p->b = q;
	scanf("%c", &q->a);
	q->b = NULL;
	p = q;
    }return head;
}

void * fr(ch * head)
{
    ch * p, * q;
    p = q = head;
    while (q = NULL){
	p = q->b;
	free(q);
	q = p;
    }
}

void exchangea(int m, int n, int b, int c, ch * head)
{
    char mid;
    int i;
    ch * p, * q, * d, * e;
    for (i = 0; i < m; i++){
	int j;
	q = p = head;
	for (j = 0; j < (b - 1) * m + i; j++){
	    q = p->b;
	    p = q;
	}d = q;
	q = p = head;
	for (j = 0; j < (c - 1) * m + i; j++){
	    q = p->b;
	    p = q;
	}e = q;
	mid = d->a;
	d->a = e->a;
	e->a = mid;
    }
}

void exchangev(int m, int n, int b, int c, ch * head)
{
    char mid;
    int i;
    ch * p, * q, * d, * e;
    for (i = 0; i < n; i++){
        int j;
        q = p = head;
        for (j = 0; j < i * m + b - 1; j++){
            q = p->b;
            p = q;
        }d = q;
        q = p = head;
        for (j = 0; j < i * m + c - 1; j++){
            q = p->b;
            p = q;
        }e = q;
        mid = d->a;
        d->a = e->a;
        e->a = mid;

}

void prin(int m, int b, int c, ch * head)
{
    int i;
    ch * p, * q;
    p = q = head;
    for (i = 0; i < (b - 1) * m + c - 1; i++){
	q = p->b;
	p = q;
    }switch (p->a){
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

void mak(int m, int n, int a, int b, int c, ch * head)
{
    switch (a){
    case 1:
	prin(m, b, c, head);
	break;
    case 2:
	exchangea(m, n, b, c, head);
	break;
    case 3:
	exchangev(m, n, b, c, head);
	break;
    default:
	break;
    }
}

int main()
{
    int m, n, flag = 1, num, a, b, c, sum = 0;
    ch * head = NULL;
    while (flag == 1){
	sum++;
	scanf("%d%d", &m, &n);
	if (m < 0 || n < 0) break;
	head = creat(n * m);
	scanf("%d", &num);
	int i = 0;
	printf("Case #%d:\n", sum);
	for (; i < num; i++){
	    scanf("%d%d%d", &a, &b, &c);
	    mak(m, n, a, b, c, head);
	}fr(head);
    }
    return 0;
}
