#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int seed;
	int key1, key2, key3, cir = 0;
	char sen[100];
	int choose;
	printf("��ȣȭ�Ϸ��� 0, �ص��Ϸ��� 1�� �Է����ּ��� : ");
	scanf("%d", &choose);
	switch (choose) {

	case 0://��ȣȭ
		printf("��ȣȭ�� ������ �Է����ּ��� : ");
		scanf("%s", sen);
		printf("��ȣ�� Ǯ�� ���� �õ� ���� �Է����ּ���(1000�̸�) :");
		scanf("%d", &seed);
		printf("\n�õ� %d�� ��ȣȭ�� ������ %s�Դϴ�", seed, sen);

		key1 = seed / 100;
		key2 = (seed - key1 * 100) / 10;
		key3 = seed - key1 * 100 - key2 * 10;

		for (int i = 0; sen[i] != 0; i++) {
			cir++;
			if (cir > 3) cir = 1;

			switch (cir) {
			case 1:
				sen[i] = sen[i] + key1;
				break;

			case 2:
				sen[i] = sen[i] - key2;
				break;

			case 3:
				sen[i] = sen[i] + key3;
				break;

			}
		}
		printf("\n\n��ȣȭ�� ���� \n");
		for (int i = 0; sen[i] != 0; i++)
			printf("%c", sen[i]);
		printf("\n\n");
		system("pause");
		break;



	case 1://�ص�
		printf("�ص��� ������ �Է����ּ��� : ");
		scanf("%s", sen);
		printf("������ �õ� ���� �Է����ּ���(1000�̸�) :");
		scanf("%d", &seed);
		printf("\n�õ� %d�� �ص��� ������ %s�Դϴ�", seed, sen);

		key1 = seed / 100;
		key2 = (seed - key1 * 100) / 10;
		key3 = seed - key1 * 100 - key2 * 10;

		for (int i = 0; sen[i] != 0; i++) {
			cir++;
			if (cir > 3) cir = 1;

			switch (cir) {
			case 1:
				sen[i] = sen[i] - key1;
				break;

			case 2:
				sen[i] = sen[i] + key2;
				break;

			case 3:
				sen[i] = sen[i] - key3;
				break;

			}
		}
		printf("\n\n�ص��� ��ȣ \n");
		for (int i = 0; sen[i] != 0; i++)
			printf("%c", sen[i]);
		printf("\n\n");
		system("pause");
		break;

	}
}