//�ŵ� ���� ��ȯ, �ݺ� �˰��� ��

#include <stdio.h>

double power_iteration(double x, int n) { // x�� ��, n�� �����̴�.
	int i;
	double r = 1.0;
	for (i = 0; i < n; i++)
		r = r * x;
	return (r);
}
double power_recursion(double x, int n) { // x�� ��, n�� �����̴�.
	if (n == 0) return 1;
	else if ((n % 2) == 0) // n�� ¦���� ���
		return power_recursion(x * x, n / 2);
	else return x * power_recursion(x * x, (n - 1) / 2); // n�� Ȧ���� ���
}
int main(void) {
	double base = 2.0;
	int exponent = 10;
	double result;

	result = power_iteration(base, exponent);
	printf("��� ���: %.2f\n", result);

	result = power_recursion(base, exponent);
	printf("��� ���: %.2f\n", result);

	return 0;
}
