#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
//stirng reverse�� ���� 12300�� 321�� ����� ���α׷�
int main()
{
	string s;
	int n;
	
	getline(cin, s);    //12300
	reverse(s.begin(), s.end());  //00321
	stringstream(s) >> n;  //321
	cout <<n<< endl;  //321
	//cout << s;
	return 0;
}