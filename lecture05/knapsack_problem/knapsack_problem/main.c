#include <stdio.h>
#include <stdlib.h>

int Max(int a, int b) {
	return (a > b) ? a : b;
}

int knapSack(int W, int wt[], int val[], int n) {
	int i, w;
	int K[n + 1][W + 1]; //�޸������̼�(�����Ϸ� ���� -> �����Ҵ�)
	for (i = 0; i <= n; i++) { //�������� Ȯ��
		for (w = 0; w <= W; w++) { //���Ժ� Ȯ��(���� ���� ���� �ݺ�)
			if (i == 0 || W == 0) { //ù��° �����̰ų� ���԰� 0�̸� 0���� �ʱ�ȭ
				K[i][w] = 0;
			}
			else if (wt[i - 1] <= w) { //���� ������ ���� <= ���� ����
				K[i][w] = Max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]); //���� ���������� �ְ� ��ġ�� ����
					//���� ������ ��ġ + ���� ���������� (����-���纸������)�� �ְ� ��ġ, ���� ���������� �ְ� ��ġ
			}
			else { //���� ���԰� ������
				K[i][w] = K[i - 1][w]; //���� ���������� �ְ� ����
			}
		}
	}

	return K[n][W];
}

void main() {
	int val[] = { 60, 100, 120 }; //���� ��ġ
	int wt[] = { 10, 20, 30 }; //���� ����
	int W = 50; //���� ����
	int n = sizeof(val) / sizeof(val[0]);
	printf("�ִ� : %d\n", knapSack(W, wt, val, n));
}