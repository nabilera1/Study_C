#include <iostream>
#include <cstring>
using namespace std;

class Tv {
private:
	int channel;
	int volume;
public:
	Tv() { // TV�� ���� ��
		cout << "TV On!" << endl;
		init(0, 3);
	}
	void init(int c, int v) { // ä���� 0, ������ 3���� �ʱ�ȭ ��Ų��.
		channel = c;
		volume = v;
	}
	void channelUp() { // ä���� 0~100���� ���� �� ä�� 100���� �ø��� �ٽ� ä�� 0���� ����.
		cout << "Channel Up!" << endl << endl;
		channel++;
		channel %= 101;
	}
	void channelDown() { // ä�� 0���� ������ ä�� 100���� ����.
		cout << "Channel Down!" << endl << endl;
		if (channel == 0)
			channel = 100;
		else
			channel--;
	}
	void volumeUp() { // ������ 0~10���� �����ϰ� 10���� �ø��� ���̻� �ö��� �ʴ´�.
		cout << "Volume Up!" << endl << endl;
		if (volume < 10)
			volume++;
	}
	void volumeDown() { // ������ 0���� ������ ���̻� �������� �ʴ´�.
		cout << "Volume Down!" << endl << endl;
		if (volume > 0)
			volume--;
	}
	void getChannel(int c) { // ���ڸ� �Է��ϸ� �� ä�η� �̵��Ѵ�.
		if (c > 0 && c < 101) {
			channel = c;
			cout << "ä�� " << c << "�� �̵��߽��ϴ�." << endl << endl;
		}
		else {
			cout << "�߸��� ä�� �Է�" << endl;
		}
	}
	void show_info() { // ä�ΰ� ������ ������ش�.
		cout << "ä��: " << channel << ", ����: " << volume << endl << endl;
	}
};


void main() {
	Tv* t = new Tv();
	int menu,ch,exit=0;
	while (!exit) {
		cout << "1: ä�� �� \t2: ä�� �� \t3: ä�� ���� " << endl;
		cout << "4: ���� �� \t5: ���� �� \t6: Ȯ�� ��  \t7: ����" << endl;
		cin >> menu;
		switch (menu) {
		case 1:
			t->channelUp();
			break;
		case 2:
			t->channelDown();
			break;
		case 3:
			cout << "Input Channel (0-100): ";
			cin >> ch;
			t->getChannel(ch);
			break;
		case 4:
			t->volumeUp();
			break;
		case 5:
			t->volumeDown();
			break;
		case 6:
			t->show_info();
			break;
		case 7:
			exit = 1;
			break;

		}
	}
}