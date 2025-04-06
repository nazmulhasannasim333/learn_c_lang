#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c);
    printf("a = %d", a);
    printf(" b = %.3f", b);
    printf(" c = %c", c);
    return 0;
}