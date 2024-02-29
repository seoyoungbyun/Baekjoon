#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char num;
	int n, sum = 0;

	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		scanf("%c", &num);
		sum += num - 48;
	}

	printf("%d", sum);
}