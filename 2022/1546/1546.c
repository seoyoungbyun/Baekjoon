#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double array[1000];
	int n, i, big = 0;
	double average = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &array[i]);
		if (array[i] > big)
			big = array[i];
	}
	for (i = 0; i < n; i++)
	{
		array[i] = array[i] / big * 100;
		average += array[i];//average += array[i] / big * 100���� ���� �� ����
	}
	average /= n;
	printf("%f", average);
}
//�� ���� �� ����� �� ����/�ִ� * 100/���� �ص� ��