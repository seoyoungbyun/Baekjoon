#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char s[100];
	int point[26];

	scanf("%s", s);

	for (int i = 0; i < 26; i++)
		point[i] = -1;

	for (int i = 0; s[i] != '\0'; i++)
	{
		int index = s[i];
		if (point[index - 97] != -1)
			continue;
		point[index - 97] = i;
	}

	for (int i = 0; i < 26; i++)
		printf("%d ", point[i]);
}