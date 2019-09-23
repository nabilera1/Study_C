#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>

#ifdef IN
#undef IN
#endif

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

static int count = -1;

typedef struct pyo
{
	int bunho; //�����ȣ
	int p_jumsu; //�ʱ�����
	int c_jumsu;  //ü������
	int m_jumsu;  //��������
	int tot;   //����
	char* panjung; //����
}IN[5];

void display()
{
	gotoxy(5, 5); printf("�����ȣ :\n");
	gotoxy(5, 6); printf("�ʱ�������� :\n");
	gotoxy(5, 7); printf("ü�½������� :\n");
	gotoxy(5, 8); printf("������������ :\n");
	gotoxy(40, 20); printf("[�Է�:1][���:2]\n");
}

void input()
{
	count++;
	do
	{
		gotoxy(22, 5); clreol();
		scanf("%d", &IN[count].bunho);//���� ���ڸ� �Է�
	} while (IN[count].bunho > 9);

	do
	{
		gotoxy(22, 6); clreol();
		scanf("%d", &IN[count].p_jumsu);
	} while (IN[count].p_jumsu < 0 || IN[count].p_jumsu>100);

	do
	{
		gotoxy(22, 6); clreol();
		scanf("%d", &IN[count].p_jumsu);
	} while (IN[count].p_jumsu < 0 || IN[count].p_jumsu>100);

	do
	{
		gotoxy(22, 7); clreol();
		scanf("%d", &IN[count].c_jumsu);
	} while (IN[count].c_jumsu < 0 || IN[count].c_jumsu>100);

	do
	{
		gotoxy(22, 8); clreol();
		scanf("%d", &IN[count].m_jumsu);
	} while (IN[count].m_jumsu < 0 || IN[count].m_jumsu>100);


	gotoxy(21, 5); clreol();
	gotoxy(21, 6); clreol();
	gotoxy(21, 7); clreol();
	gotoxy(21, 8); clreol();
	gotoxy(58, 20); clreol();
}

void pro()
{
	IN[count].tot = IN[count].p_jumsu + IN[count].c_jumsu + IN[count].m_jumsu;
	if (IN[count].tot >= 200)
		IN[count].panjung = "Pass";
	else
		IN[count].panjung = "Fail";

	IN[count].panjung = (IN[count].p_jumsu > 60 && IN[count].c_jumsu > 60 && IN[count].m_jumsu > 60) ? "Pass" : "Fail";
}

void output()
{
	struct pyo temp;
	int i, j;
	clrscr();
	gotoxy(5, 1); printf("���ȣ : 1234\n");
	gotoxy(5, 3); printf(" ��ȣ �ʱ� ü�� ���� ���� ���� \n");
	gotoxy(5, 17); printf("�Է��ڷ�\n");
	for (i = 0; i <= count; i++)
	{
		gotoxy(5, 18 + i);
		printf("%3d %3d %3d %3d\n", IN[i].bunho, IN[i].p_jumsu, IN[i].c_jumsu, IN[i].m_jumsu);
	}

	for (i = 0; i < count; i++)
	{
		for (j = i; j <= count; j++)
		{
			if (IN[i].bunho > IN[j].bunho)
			{
				temp = IN[i];
				IN[i] = IN[j];
				IN[j] = temp;
			}
		}
	}

	for (i = 0; i <= count; i++)
	{
		gotoxy(5, 5 + i);
		printf("%5d %7d %7d %7d %7d %10s\n", IN[i].bunho, IN[i].p_jumsu, IN[i].c_jumsu, IN[i].m_jumsu, IN[i].tot, IN[i].panjung);
	}
}

int main(void)
{
	char ch;
	clrscr();
	display();
	do
	{
		gotoxy(59, 20);
		ch = getchar();
		if (ch == '1')
		{
			input();
			pro();
		}
		else if (ch == '2')
		{
			output();
			exit(1);
		}

		if (cout >= 4)
		{
			gotoxy(45, 22);
			printf("�ִ� ���ڵ� ���� 5���Դϴ�.");
			gotoxy(58, 20);
			ch = getche();
			output();
			exit(1);
		}
	} while (1);
}
