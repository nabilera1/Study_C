#include<stdio.h>
#define Node 4 //VERTEX
#define EDGE 6
#define Start 1
int a[Node + 1][Node + 1] = 
{ {0,0,0,0,0},{0,0,1,0,1},{0,1,0,1,2},{0,0,1,0,1}, {0,1,2,1,0} };
int success, path[EDGE + 1], n; //��������, ������ ���� ����, ����� ������ ��
void visit(int);
int main(void) {
	success = 0; n = EDGE;
	visit(Start);
	if (success == 0)
		printf("�ذ� ����\n");
	return 0;
}
void visit(int i) {
	int j; path[n] = i;
	if (n == 0 && i == Start) {
		printf("�� %d:", ++success);
		for (i = 0; i <= EDGE; i++)
			printf("%d", path[i]);
		printf("\n");
	}
	else {
		for (j = 1; j <= Node; j++)
			if (a[i][j] != 0) {//���� ���� ����
				a[i][j]--; a[j][i]--;
				n--;
				visit(j);
				a[i][j]++; a[j][i]++;
				n++;
			}
	}
}