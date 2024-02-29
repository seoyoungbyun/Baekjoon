#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, big, small, num;
	small = 1000000;
	big = -1000000;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if (num > big)
			big = num;
		if (num < small)
			small = num;
	}
	printf("%d %d", small, big);
}
//배열로 하지않고 숫자 입력받은 후 바로 비교 가능