#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF)
		printf("%d\n", a + b);
}
//scanf�� ��ȯ ���� �Է¹��� ������ ����,���⼭�� 2�� ��ȯ
//scanf�� ��ȯ ���� EOF�� �ǰų� -1�� �� �� �Է¹��� �ʾ� ������ ������ �Ǵ�