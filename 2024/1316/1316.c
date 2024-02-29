#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n, num;
	char str[100];

	scanf("%d", &n);
	num = n;

	for (int i = 0; i < n; i++) {
		int alpha[26] = { 0 };

		scanf("%s", str);

		int j = 0;
		while (str[j] != '\0') {
			int idx = str[j] - 97;
			alpha[idx]++;

			char last = str[j];
			while (last == str[j])
				j++;
		}

		for (int j = 0; j < 26; j++)
			if (alpha[j] >= 2) {
				num--;
				break;
			}
	}

	printf("%d", num);
}