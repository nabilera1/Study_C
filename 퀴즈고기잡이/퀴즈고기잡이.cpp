#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int data[101], N, W, max,maxi;

int main()
{
	printf("������ ���̿� �׹��� �� �Է� : ");
	scanf("%d %d", &N, &W);
	printf("����� �迭 �Է�\n");
	for (int i = 0; i < N; i++)
	{
		scanf("%d", data + i);
		//printf("%d ", data[i]);
	}
	for (int i = 0; i < N + W - 1; i++)
	{
		int sum = 0, j;
		for (j = 0; j < W; j++)
		{
			sum += data[i + j];
		}
		if (sum > max)
		{
			max = sum;
			maxi = i;
		}
	}
	printf("(");
	for (int i = 0; i < W; i++)
	{
		printf("%d ", data[maxi + i]);
	}
	printf(")\n");
	printf("�ִ� %d ����", max);
	return 0;
}

