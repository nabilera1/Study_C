#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int yoot[4];


void Rand_yoot()
{
	int i;
	for (i = 0; i < 4; i++)
	{
		yoot[i] = rand() % 2;
		//printf("%d", yoot[i]);
	}

}
int count_yoot()
{
	int i,cnt=0;

	for (i = 0; i < 4; i++)
		if (yoot[i] == 1) cnt++;
	return cnt;
}
int main()
{
	int n, n1=1;


	srand((unsigned)time(NULL));
	printf("���ڸ� �Է��ϰ� ���͸� ġ�� �������� �����ϴ�.\n");
	printf("���� ���� Ƚ��:");
	scanf_s("%d", &n);
	do {
		printf("%d��° �õ�\n", n1++);
		Rand_yoot();
		switch (count_yoot()) {
		case 1: printf("��\n");
			break;
		case 2: printf("��\n");
			break;
		case 3: printf("��\n");
			break;
		case 4: printf("��\n");
			break;
		default: printf("��\n");
		}
	} while (--n);
	
	
	return 0;
}


//
//#include <stdio.h>
//int f(int a, int b, int c, int d)
//{
//	return a + b + c + d;
//}
//main()
//{
//	int a, b, c, d, s;
//	printf("4���� �� ���¸� �Է��ϼ���.\n");
//	printf("(0:���������� ���� ����, 1:�������� ����):");
//	scanf_s("%d %d %d %d", &a, &b, &c, &d);
//	switch (f(a, b, c, d))
//	{
//	case 1: printf("��\n");
//		break;
//	case 2: printf("��\n");
//		break;
//	case 3: printf("��\n");
//		break;
//	case 4: printf("��\n");
//		break;
//	default: printf("��\n");
//	}
//}
