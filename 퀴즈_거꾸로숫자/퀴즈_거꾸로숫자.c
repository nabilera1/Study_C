//#include<cstdio>
#include<stdio.h>

int first = 1;   //1000�̸� 0001�� ���ڸ� 0�� �����ϱ� ����

void solve(int n)  //102��� �Ǵ� 1020�̶��
{
	if (n == 0) return;
	if(first && (n%10)==0)//ó�� ����� ���ڸ��� 0���� üũ
		solve(n/10);
	else
	{
		printf("%d", n % 10); //2
		first = 0;
		solve(n/10);  //10
	}
}

int main()
{
	int n;
	printf("���� �Է� : ");
	scanf_s("%d", &n);       
	printf("�Ųٷ� ���� ��� : ");
	solve(n);
	return 0;
}