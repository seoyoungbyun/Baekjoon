#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, num, j;
	char s[20], ss[161];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %s", &num, s);
		for (j = 0; s[j] != '\0'; j++)
			for (int k = 0; k < num; k++)
				ss[num * j + k] = s[j];
		ss[num * j] = '\0';
		printf("%s\n", ss);
	}
}