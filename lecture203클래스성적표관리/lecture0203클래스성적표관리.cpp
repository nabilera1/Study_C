#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Name {
	string name;
public:
	void setname(string name) {
		this->name = name;

	}
	string getname() {
		return name;
	}
};

class Subject {
	int subsco;
public:

	void setsubsco(int subsco) {
		this->subsco = subsco;
	}
	int getsubsco() {
		return subsco;
	}
};

class Score {
	Name na;
	Subject mat;
	Subject eng;
	Subject kor;
public:
	void setmatsco(int sco) {
		mat.setsubsco(sco);
	}
	int getmatsco() {
		return mat.getsubsco();
	}
	void setengsco(int sco) {
		eng.setsubsco(sco);
	}
	int getengsco() {
		return eng.getsubsco();
	}
	void setkorsco(int sco) {
		kor.setsubsco(sco);
	}
	int getkorsco() {
		return kor.getsubsco();
	}
	void setname(string name) {
		na.setname(name);
	}
	string getname() {
		return na.getname();
	}
	int getsum() {
		return getmatsco() + getengsco() + getkorsco();
	}
	float getavg() {
		return this->getsum() / 3.f;
	}
};

void main() {
	Score* aa;
	int num;
	cout << "�� �� �Է��Ͻðڽ��ϱ�?";
	cin >> num;
	aa = new Score[num];
	for (int i = 0; i < num; i++) { //���� �Է�  num��ŭ �Է�
		string sn;
		cout << i + 1 << "��° �̸��� �Է��Ͻÿ� : ";
		cin >> sn;
		aa[i].setname(sn);
		int sco;
		cout << "������� �Է��Ͻÿ� : ";
		cin >> sco;
		aa[i].setkorsco(sco);
		cout << "������� �Է��Ͻÿ� : ";
		cin >> sco;
		aa[i].setengsco(sco);
		cout << "���м����� �Է��Ͻÿ� : ";
		cin >> sco;
		aa[i].setmatsco(sco);
	}

	cout << "====================================================================\n";
	cout << "=   �̸�  ==     ����  ==   ����   ==   ����  ==   ����    == ��� =\n";
	cout << "====================================================================\n";
	for (int i = 0; i < num; i++) { //���� ��� num��ŭ ���
		cout << "   " << setw(3) << aa[i].getname();
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				cout << setw(11) << aa[i].getkorsco();
			}
			if (j == 1) {
				cout << setw(11) << aa[i].getengsco();
			}
			if (j == 2) {
				cout << setw(12) << aa[i].getmatsco();
			}
		}
		cout << setw(11) << aa[i].getsum();
		cout << setw(11) << aa[i].getavg() << "   " << "\n";
	}
	delete[] aa; //�޸� �Ҵ� ����
}
