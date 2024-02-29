#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
double calculate(char* g) {
	char grade = *g;
	double sum = 0;

	switch (grade) {
	case 'A':
		sum += 4;
		break;
	case 'B':
		sum += 3;
		break;
	case 'C':
		sum += 2;
		break;
	case 'D':
		sum += 1;
		break;
	case 'P':
		return -1;
	}

	if (*(g + 1) == '+')
		sum += 0.5;

	return sum;
}
int main(void)
{
	char arr[51];
	double credit, csum = 0, sum = 0;
	char grade[3];

	for (int i = 0; i < 20; i++) {
		scanf("%s %lf %s", arr, &credit, grade);

		double cal = calculate(&grade);
		if (cal != -1) {
			sum += cal * credit;
			csum += credit;
		}
	}

	printf("%f", sum / csum);
}