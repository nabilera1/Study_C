#include <stdio.h>
int main()
{
	char pw[50];
	int i;
	printf("��ȣ�� �Է��Ͻÿ�. : ");
	//scanf_s("%s", pw);
	gets_s(pw,50);
	printf("��� 1 : ");
	for (i = 0; pw[i] != NULL; i++)
		printf("%c", pw[i] + 2);
	printf("\n��� 2 : ");
	for (i = 0; pw[i] != NULL; i++)
		printf("%c", (pw[i] * 7) % 80 + 48);
	return 0;
}