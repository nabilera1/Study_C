//��ȭ����

#include<stdio.h>
int main()
{
	int a, b, c;
	printf("�� ���� ���� �ʺ� �Է��ϼ���:");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a < 200)
		printf("�浹 %d", a);
	else if (b < 200)
		printf("�浹 %d", b);
	else if (c < 200)
		printf("�浹 %d", c);
	else
		printf("���");
	return 0;
}