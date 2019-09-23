#include<stdio.h> 
#include<stdlib.h> 
int test_bit[1000] = { 0 };
int bit_up(int index);
int make_word(int len, char* space); // �ܾ� ����� 
int qcompare(const void* first, const void* second); // �������� 
int main() {
	int i, j;
	int isfailed = 0;
	int input;
	int* input_arr, * sorted_arr;
	char** dictionary;
	scanf_s("%d", &input);
	input_arr = (int*)malloc(input * sizeof(int)); // ���̸� ������� ���� �迭 
	sorted_arr = (int*)malloc(input * sizeof(int)); // �����ؼ� �� �迭 
	dictionary = (char**)malloc(input * sizeof(char*)); // �ܾ���� ���� �迭 
	for (i = 0; i < input; i++) {
		scanf_s("%d", &(input_arr[i]));
		sorted_arr[i] = input_arr[i];
	}
	qsort(sorted_arr, input, sizeof(int), qcompare);
	dictionary[0] = (char*)malloc((sorted_arr[0] + 1) * sizeof(char)); // ���� �� �ܾ�� ���� 0���� ä��� ���ؼ� ���� �� 
	make_word(sorted_arr[0] + 1, dictionary[0]); // 000000...  ä�������� 
	dictionary[0][sorted_arr[0]] = '\0';
	for (i = 1; i < input; i++) { // ���� �� �ܾ� �����ϰ�� �ؿ������� 1�� ä���ø� 
		dictionary[i] = (char*)malloc((sorted_arr[i] + 1) * sizeof(char));
		dictionary[i][sorted_arr[i]] = '\0';
		if (make_word(sorted_arr[i], dictionary[i])) { // bit overflow�Ǹ� 1�� ��ȯ�ؼ� ���з� ���� 
			isfailed = 1;
			// break�� ���� ������ free�ڵ� ���� ¥�� �����Ƽ�.. 
		}
	}
	if (isfailed) { // ��Ʈ Over ���� 
		printf("-1");
	}
	else {
		printf("1\n");
		for (i = 0; i < input; i++) {
			for (j = 0; j < input; j++) {
				if (input_arr[i] == sorted_arr[j]) { // sorted_arr�� visit arr���� 
					printf("%s\n", dictionary[j]);
					sorted_arr[j] = 0;
					break;
				}
			}
		}
	}
	for (i = 0; i < input; i++) {
		free(dictionary[i]);
	}
	free(dictionary);
	free(sorted_arr);
	free(input_arr);
	return 0;
}
int bit_up(int index) {
	if (test_bit[index] == 0) {
		test_bit[index] = 1;
		return 0;
	}
	else {
		if (index == 0) { // bit overflow == fail 
			return 1;
		}
		else {
			test_bit[index] = 0;
			bit_up(index - 1);
			return 0;
		}
	}
}
int make_word(int len, char* space) {
	int i;
	if (bit_up(len - 1)) { // bit overflow == fail 
		return 1;
	}
	else {
		for (i = 0; i < len; i++) {
			space[i] = '0' + test_bit[i];
		}
		return 0;
	}
}
int qcompare(const void* first,const void* second) {
	if (*(int*)first < *(int*)second) {
		return 1;
	}
	else if (*(int*)first < *(int*)second) {
		return -1;
	}
	else {
		return 0;
	}
}