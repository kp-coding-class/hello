#include <stdio.h>

int main()
{
    printf("Hello world\n");

    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    int b;
    printf("Enter b: ");
    scanf("%d", &b);

    int c = a + b;
    printf("%d + %d = %d\n", a, b, c);

    return 0;
}