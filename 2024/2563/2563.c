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
//2���� �迭�� �Լ��� �����ϰ� ��ǥ�� �޾� �����̰� �����ϴ� �κ��� 1�� �ʱ�ȭ->�ٸ� �����̰� �����ϴ� �κ��� 2���� �迭�� 1�� �ʱ�ȭ�Ҷ� �̹� 1�� �ʱ�ȭ�Ǿ����� ��ü ���̿��� 1�� ���� ������ Ǯ��
//�ð����⵵�� ���� ��� �����غ���