#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int s;

    scanf("%d", &s);
    if (s >= 90)
        printf("A");
    else if (s >= 80 && s < 90)
        printf("B");
    else if (s >= 70 && s < 80)
        printf("C");
    else if (s >= 60 && s < 70)
        printf("D");
    else
        printf("F");
}