#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle();
	~Circle() {
		cout << "I am dying";
	};
	Circle(int radius);
	double getArea();
};
//Circle::Circle()
//{
//	radius = 1;
//	cout << "�⺻ ������ " << radius << "�� �� ����" << endl;
//};
Circle::Circle() :Circle(1) {}
Circle::Circle(int radius)
{
	this->radius = radius;
	cout << "������ " << radius << "�� �� ����" << endl;
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}
class Rectangle {
	int width, height;
public:
	Rectangle(int width, int height)
	{
		this->width = width;
		this->height = height;
	}
	double getArea() {
		return (double)width * height;
	}
};
int main()
{
	int n;
	cout << "������ �������� �Է��ϼ��� : ";
	cin >> n;
	Circle donut(n);
	double area = donut.getArea();
	cout << "donut =" << area << endl;

	cout << "������ �������� �Է��ϼ��� : ";
	cin >> n;
	Circle pizza(n);
	area = pizza.getArea();
	cout << "pizza=" << area << endl;

	int w, h;
	cout << "�簢���� ���� ����, ���� ���̸� �Է��ϼ��� :";
	cin >> w >> h;
	Rectangle rect(w,h);
	cout << "Rectangle=" << rect.getArea() << endl;
	return 0;
}
