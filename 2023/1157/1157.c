#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char s[1000001];
	int alpha[26] = { 0 }, i;

	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
			alpha[s[i] - 65]++;
		else if (s[i] >= 97 && s[i] <= 122)
			alpha[s[i] - 97]++;
	}

	int index, max = -1;
	for (i = 0; i < 27; i++)
		if (max < alpha[i])
		{
			max = alpha[i];
			index = i;
		}

	for (i = 0; i < 27; i++)
		if (i != index)
			if (max == alpha[i])
				break;

	if (max == alpha[i])
		printf("?");
	else
		printf("%c", index + 65);
}