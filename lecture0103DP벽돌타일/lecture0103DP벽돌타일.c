//2*n ũ���� ���簢���� 1*2, 2*1 ������ ä��� ����� ���� ���ϴ� ���α׷��� �ۼ�����.

//�Է� : 1<=n<=1000
//��� : 2�̸� 2�� ���

#include<stdio.h>

int d[1001];

int dp(int x)
{
	if (x == 1) return 1;
	if (x == 2) return 2;
	if (d[x] !=0) return d[x];
	return d[x] = (dp(x - 1) + dp(x - 2));
}
int main()
{
	int n;
	printf("2*n : ���ϰ��� �ϴ� n�� ������? ");
	scanf_s("%d", &n);
	//scanf_s("%d", &n, sizeof(n));
	printf("n= %d �� ��� ����� ���� %d�̴�.", n, dp(n));
}