#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, m, sum = 0;
	int arr[100];

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	//내림차순으로 배열 정렬
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	int max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int r = j + 1; r < n; r++)
			{
				sum = arr[i] + arr[j] + arr[r];
				if (sum <= m && max < sum) {
					max = sum;
				}
				sum = 0;
			}
		}
	}

	printf("%d", max);
}