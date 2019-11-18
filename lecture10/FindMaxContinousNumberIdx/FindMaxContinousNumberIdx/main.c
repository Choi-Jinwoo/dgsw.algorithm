#include <stdio.h>
/*
void main() {
	int arr[] = { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 };

	int maxContinousIdx = 0;
	int maxContinousCnt = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (arr[i] == 1) {
			continue;
		}

		int isContinous = 0;
		arr[i] = 1;

		int continousCnt = 0; // �ݺ��� Ƚ��
		int maxContinousCntLoop = 0; // ������ �ݺ��� Ƚ���� �ִ�

		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) {
			if (arr[j] == 1 && isContinous == 1) { // ���ӵǴ� ��Ȳ
				isContinous = 1;
				continousCnt++;
			}
			else if (arr[j] == 1 && isContinous == 0) { // ���ӵ��� �ʾ����� 1�� ��Ȳ
				isContinous = 1;
				continousCnt = 1;
			}
			else { // 0�λ�Ȳ
				isContinous = 0;
				continousCnt = 0;
			}

			if (continousCnt > maxContinousCntLoop) { // �ݺ������� �ִ� ���� ���ڸ� ����
				maxContinousCntLoop = continousCnt;
			}
		}

		if (maxContinousCnt < maxContinousCntLoop) {
			maxContinousCnt = maxContinousCntLoop;
			maxContinousIdx = i;
		}
		arr[i] = 0;
	}

	printf("%d\n", maxContinousIdx);
}
*/


void main() {
	int arr[] = { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 };
	int count = 0;
	int prev_zero_index = -1;

	int max_count = 0;
	int max_index = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		// ���� ���Ұ� 1�ΰ��
		if (arr[i] == 1) {
			count++;
		}
		else { // ���� ���Ұ� 0�ΰ��
			// ���� 0�� ������ ���� ���ӵ� 1�� ������ count�� ����
			count = i - prev_zero_index;
			
			// prev_zero_idex�� ���� �ε����� ������Ʈ
			prev_zero_index = i;
		}

		// 1�� ������ ���� �ִ� 1�� �������� ũ�ٸ�
		// max_count�� max_index�� ������Ʈ
		if (count > max_count) {
			max_count = count;
			max_index = prev_zero_index;
		}
	}

	printf("%d\n", max_index);
}