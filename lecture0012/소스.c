//�̺� Ž��

#include<stdio.h>
#include<stdlib.h>

int S[100], n, k;

int find(int s, int e)
{
	while (s <= e)
	{
		int m = (int)(s + e) / 2;//2
		if (S[m] == k)
			return m;
		if (S[m] > k)
			e = m - 1;
		else s = m + 1;
	}
	return -1;
}

int main()
{
	printf("Binary Search, n, k : ���� ����, ã�� ����");
	scanf_s("%d %d", &n, &k); //n���� �迭, ã�� �� k
	
	for (int i = 0; i < n; i++)
		scanf_s("%d", &S[i]);
	printf("%d��° ��ġ���� �߰�\n", find(0, n - 1)+1);
	return 0;
}