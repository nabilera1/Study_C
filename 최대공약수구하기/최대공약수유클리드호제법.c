//ū���� ����

#include<stdio.h>

int gcd(int a, int b);

int main()
{
	int m, n;
	scanf_s("%d %d", &m, &n);

	//ū���� ������ ������ �ϱ�

	printf("%d", gcd(m, n));
	return 0;
}

int gcd(int a, int b) ///////////�����߻� üũ�غ���
{
	//if(!b) return a;
	if(b==0) return a;
	gcd(b, a % b);
}

//#include<stdio.h>
//
//int main()
//{
//	int m, n, r, g;
//	scanf_s("%d %d", &m, &n);
//	g = m * n;
//	for (; r = m % n; n = r, m = n);
//	printf("�ִ�����: %d, �ּҰ���� %d", n, g / n);
//}