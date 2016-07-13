#include <stdio.h>

int main()
{
    char c;
    char a;
    printf("1\n");
    while((c = getchar()) != '\n' && c !=EOF);
    printf("2\n");
    scanf("%c", &a);
    printf("%c\n", a);
    while((c = getchar()) != '\n' && c !=EOF);
    scanf("%c", &a);
    printf("%c\n", a);
    printf("3\n");
    return 0;
}
