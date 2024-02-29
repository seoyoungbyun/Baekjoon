#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, area = 0, wid, len;
	int paper[101][101] = {0};

	scanf("%d", &num);
	area = num * 100;
	for (int i = 0; i < num; i++) {
		scanf("%d %d", &wid, &len);
		for (int j = 1; j <= 10; j++) {
			for (int k = 1; k <= 10; k++) {
				if (paper[len + j][wid + k] == 1)
					area -= 1;
				else
					paper[len + j][wid + k] = 1;
			}
		}
	}

	printf("%d", area);
}
//2차원 배열을 함수로 생각하고 좌표를 받아 색종이가 존재하는 부분은 1로 초기화->다른 색종이가 존재하는 부분의 2차원 배열을 1로 초기화할때 이미 1로 초기화되었으면 전체 넓이에서 1씩 빼는 식으로 풀이
//시간복잡도를 줄일 방법 생각해보기