#include <stdio.h>
#define MAX_SIZE 100

int fibonacci(int n) {
	static int arr[MAX_SIZE]; //�޸������̼�
	if (n < 2) return n;
	if (arr[n] > 0) return arr[n];
	else return arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

//�޸������̼� X
int dp(int x) {
	if (x == 1) return 1;
	if (x == 2) return 2;
	return dp(x - 1) + dp(x - 2);
}

void main() {
	int num = 10;
	int result;

	result = fibonacci(num);
	printf("%d��° �Ǻ���ġ ���� ��: %d\n", num, result);
}