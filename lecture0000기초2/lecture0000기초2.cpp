//Ctrl + F7,  Ctrl + B, Ctrl + F5

#include<stdio.h>

int main()
{
	float a, b;
	//scanf_s("%f %e", &a, &b, sizeof(a), sizeof(b));
	scanf_s("%f %e", &a, &b);
	printf("a=%f, b=%e\n", a, b);
	return 0;
}
