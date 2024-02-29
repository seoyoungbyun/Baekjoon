#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int total, n, sum = 0;
	int price[100], num[100];

	scanf("%d", &total);
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &price[i], &num[i]);
		sum += price[i] * num[i];
	}

	if (total == sum)
		printf("Yes");
	else
		printf("No");
}