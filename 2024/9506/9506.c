#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPerfect(int num, int* a) {
	int i = 1;
	int sum = 1;
	for (int j = 2; j < num; j++) {
		if (num % j == 0) {
			a[i++] = j;
			sum += j;
		}
	}

	if (sum != num)
		return 0;
	else
		return i - 1;
}
int main(void) {
	int num;
	int a[100000];

	scanf("%d", &num);
	while (num != -1) {
		int check = isPerfect(num, a);

		if (check == 0)
			printf("%d is NOT perfect.\n", num);
		else {
			printf("%d = 1 + ", num);
			int i = 1;
			for (; i < check; i++) {
				printf("%d + ", a[i]);
			}
			printf("%d\n", a[i]);
		}

		scanf("%d", &num);
	}
}