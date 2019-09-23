

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int    S1_No, S2_No, S3_No;     // �й�
	int    S1_Kor, S2_Kor, S3_Kor;    // ���� ����
	int    S1_Math, S2_Math, S3_Math;   // ���� ���� 
	int    S1_Eng, S2_Eng, S3_Eng;    // ���� ���� 
	float  S1_Ave, S2_Ave, S3_Ave;    // ���� ���
	float  TotalAve = 0.0f;              // ��ü ��� 

	int    NumberOfStudent = 0;             // ������� �Էµ� �л��� 



	while (1)
	{
		cout << "    -------------�� ��-------------" << endl;
		cout << "     1. �л� ���� �߰�" << endl;
		cout << "     2. ��ü ���� ����" << endl;
		cout << "     Q. ���α׷� ���� " << endl;
		cout << "    -------------------------------" << endl;

		cout << "    �� ���� ��ȣ�� �Է��ϼ��� : ";

		char select;  // �޴� ��ȣ�� ���� char���� 
		cin >> select;

		switch (select)
		{

			/* ���� �߰� case */
		case '1':
		{
			if (NumberOfStudent==3)
			{
				cout << "\n���̻� �Է��Ҽ� �����ϴ�.\n";
				cout << "�ٸ��޴��� ������ �ּ��� \n\n";
				continue;
			}

			int Kor, Eng, Math;

			cout << endl;
			cout << '[' << NumberOfStudent + 1 << "] ��° �л��� " << "����, ����, ���������� �Է��� �ּ��� : ";
			cin >> Kor >> Eng >> Math;

			float Ave = float(Kor + Eng + Math) / 3.0f;      // ���� ��� 


			if (NumberOfStudent==0)
			{
				S1_No = NumberOfStudent + 1;
				S1_Kor = Kor;
				S1_Eng = Eng;
				S1_Math = Math;
				S1_Ave = Ave;

				TotalAve = S1_Ave;
			}
			else if (NumberOfStudent==1)
			{
				S2_No = NumberOfStudent + 1;
				S2_Kor = Kor;
				S2_Eng = Eng;
				S2_Math = Math;
				S2_Ave = Ave;

				TotalAve = (S1_Ave + S2_Ave) / 2;
			}
			else
			{
				S3_No = NumberOfStudent + 1;
				S3_Kor = Kor;
				S3_Eng = Eng;
				S3_Math = Math;
				S3_Ave = Ave;

				TotalAve = (S1_Ave + S2_Ave + S3_Ave) / 3;
			}


			NumberOfStudent++;

			cout << '[' << NumberOfStudent << "] ��° �л��� ������ �Է� �Ǿ����ϴ�\n\n\n";

			break;



		}


		/* ���� ���� case */
		case '2':
		{

			cout.precision(2);    // �Ǽ� ��½� �Ҽ��� ���� ���ڸ��� ��� 
			cout << fixed;        // �Ǽ� ��½� �Ҽ��� ���� ���ڸ��� ��� 

			cout << "\n\n      < ��ü �������� >\n\n";
			cout << "      �й�  ����  ����  ����    ��� \n";

			int iCnt;

			for (iCnt = 1; iCnt <= NumberOfStudent; ++iCnt)
			{

				if (1 == iCnt)
				{
					cout << setw(7) << '[' << S1_No << ']' << setw(7) << S1_Kor << setw(6) << S1_Eng << setw(6) << S1_Math << setw(8) << S1_Ave << endl;
				}
				if (2 == iCnt)
				{
					cout << setw(7) << '[' << S2_No << ']' << setw(7) << S2_Kor << setw(6) << S2_Eng << setw(6) << S2_Math << setw(8) << S2_Ave << endl;
				}
				if (3 == iCnt)
				{
					cout << setw(7) << '[' << S3_No << ']' << setw(7) << S3_Kor << setw(6) << S3_Eng << setw(6) << S3_Math << setw(8) << S3_Ave << endl;
				}
			}

			cout << '\n' << setw(27) << "��ü ��� = " << TotalAve << endl;


		}


		/* ���� case */
		case 'Q':
		{
			cout << "\n      ****���α׷��� ���� �մϴ�.****\n" << endl;
			return 0;
		}


		/* �߸��Է� case */
		default:
		{
			cout << "\n�߸��� �Է��Դϴ�. �ٽ��Է� ���ּ���.\n" << endl;
			break;
		}
		}

	}
	return 0;
}

