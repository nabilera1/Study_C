#include <stdio.h>
int main()
{
	int a, b, temp, i,sum=0;
	printf("***�� �� ������ ���� ����ϱ�***\n");
	printf("�� ���� �Է��ϼ��� :");
	scanf_s("%d %d", &a, &b);
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for (i = a; i <= b; i++)
	{
		printf("%d ", i);
		sum += i;
	}
		
	printf("������ %d�Դϴ�.\n", sum);
	return 0;
}