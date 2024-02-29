#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int stu[30] = { 0 };
	int n;

	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &n);
		stu[n - 1] = 1;
	}

	for (int i = 0; i < 30; i++)
	{
		if (stu[i] == 0)
			printf("%d\n", i + 1);
	}
}