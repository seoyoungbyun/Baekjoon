#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF)
		printf("%d\n", a + b);
}
//scanf의 반환 값은 입력받은 인자의 개수,여기서는 2가 반환
//scanf의 반환 값이 EOF가 되거나 -1이 될 때 입력받지 않아 에러난 것으로 판단