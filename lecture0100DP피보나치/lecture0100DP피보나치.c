//���� �������� ���� ������ �迭�� �����Ͽ�
//ū ������ �ذ��ϴµ� �������.
//�޸������̼�
//�Ǻ���ġ ����


#include<stdio.h>
int d[100] = { 0, };

int dp(int x) 
{
	if (x == 1) return 1;
	if (x == 2) return 1;
	if (d[x] != 0) return d[x];
	return d[x]= dp(x - 1) + dp(x - 2);
}

int main()
{
	int n = 5;
	printf("%d != %d \n", dp(n));
}