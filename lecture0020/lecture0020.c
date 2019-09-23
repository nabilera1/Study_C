//�Ǻ���ġ ����, ��ȯ, �ݺ� �˰��� ��

//��ȯ �˰���
#include <stdio.h>

int fibonacci(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main(void) {
	int num = 7;
	int result;

	result = fibonacci(num);
	printf("%d��° fibonacci ���� ��: %d", num, result);
	return 0;
}


// �ݺ� �˰���
//#include <stdio.h>
//
//int fibonacci1(int n) {
//	if (n < 2) return n;
//	else {
//		int i, tmp, cur = 1, last = 0;
//		for (i = 2; i <= n; i++) {
//			tmp = cur;
//			cur += last;
//			last = tmp;
//		}
//		return cur;
//	}
//}
//
//int fibonacci2(int n) {
//	if (n < 2) return n;
//	else {
//		int i, tmp, cur = 1, last = 0;
//		for (i = 2; i <= n; i++) {
//			tmp = last;
//			last = cur;
//			cur += tmp;
//		}
//		return cur;
//	}
//}
//
//int main(void) {
//	int num = 7;
//	int result1, result2;
//
//	result1 = fibonacci1(num);
//	result2 = fibonacci2(num);
//	printf("%d��° fibonacci1 ���� ��: %d\n", num, result1);
//	printf("%d��° fibonacci2 ���� ��: %d", num, result2);
//	return 0;
//}




//�Ǻ���ġ �޸������̼�

//#include <stdio.h>
//#define MAX_SIZE 100
//
//int fibonacci(int n) {
//	static int arr[MAX_SIZE];
//	if (n < 2) return n;
//	if (arr[n] > 0) return arr[n];
//	else return arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main(void) {
//	int num = 10;
//	int result;
//
//	result = fibonacci(num);
//	printf("%d��° fibonacci ���� ��: %d", num, result);
//	return 0;
//}