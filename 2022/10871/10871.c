#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[10000], i, n, x, j = 0;
	int li[10000];

	scanf("%d %d", &n, &x);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] < x)
			li[j++] = arr[i];
	}
	for (i = 0; i < j; i++)
		printf("%d ", li[i]);
}
//배열 다 입력받은 후 비교해서 바로 출력
//배열 2개 사용 안 해도됨