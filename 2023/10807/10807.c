#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, num, count = 0;
	int array[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &array[i]);
	scanf("%d", &num);

	for (int i = 0; i < n; i++)
		if (array[i] == num)
			count++;

	printf("%d", count);
}