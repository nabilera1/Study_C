#include <stdio.h>
#include <string.h>
int main()
{
	char str[101];
	int i;

	printf("�ܾ ���ϼ��� : ");
	gets_s(str,100);
	for (i = strlen(str) - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	return 0;
}