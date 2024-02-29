#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int fir, sec, thi, cost;

	scanf("%d %d %d", &fir, &sec, &thi);

	if (fir == sec && sec == thi)
		cost = 10000 + fir * 1000;
	else if (fir == sec)
		cost = 1000 + fir * 100;
	else if (sec == thi)
		cost = 1000 + sec * 100;
	else if (fir == thi)
		cost = 1000 + fir * 100;
	else
	{
		if (fir > sec && fir > thi)
			cost = fir * 100;
		else if (sec > fir && sec > thi)
			cost = sec * 100;
		else
			cost = thi * 100;
	}
	printf("%d", cost);
}