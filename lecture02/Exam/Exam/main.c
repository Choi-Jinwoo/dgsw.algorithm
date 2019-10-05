#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Exam_1() {
	int carWidth = 200;
	int road[3];
	
	scanf_s("%d %d %d", &road[0], &road[1], &road[2]);

	for (int i = 0; i < 3; i++) {
		if (road[i] < carWidth) {
			printf("�浹 %d\n", road[i]);
			break;
		}

		if (i >= 2) {
			printf("���");
		}
	}
}

void Exam_2() {
	int a, b;
	scanf_s("%d %d", &a, &b);

	int max = a > b ? a : b;
	int min = a < b ? a : b;
	
	int sum = 0;

	for (int i = min; i <= max; i++) {
		printf("%d ", i);
		sum += i;
	}

	printf("\n������ %d�Դϴ�.\n", sum);
}

void Exam_3() {
	char str[100];
	gets(str);

	char * cp = str;

	while (*cp) {
		cp++;
	}
	
	while (cp != str) {
		cp--;
		printf("%c", *cp);
	}
}

void Exam_4() {
	char str[20];
	char encode_1[20];
	char encode_2[20];
	int i;

	gets(str);
	for (i = 0; str[i] != NULL; i++) {
		encode_1[i] = str[i] + 2;
		encode_2[i] = (str[i] * 7) % 80 + 48;
	}

	encode_1[i] = encode_2[i] = NULL;
	puts(encode_1);
	puts(encode_2);
}

void Exam_5() {
	srand(time(NULL));
	int stick[4];
	int cnt;
	printf("���ڸ� �Է��ϰ� ���͸� ġ�� �������� �����ϴ�.\n�U�� ���� Ƚ�� : ");
	scanf_s("%d", &cnt);
	
	for (int j = 0; j < cnt; j++) {
		printf("%d��° �õ�\n", j + 1);

		int turnedStick = 0;
		for (int i = 0; i < 4; i++) {
			stick[i] = rand() % 2;
			turnedStick += stick[i];
			printf("%d", stick[i]);
		}
		puts("");
		switch (turnedStick)
		{
		case 0:
			printf("��");
			break;
		case 1:
			printf("��");
			break;
		case 2:
			printf("��");
			break;
		case 3:
			printf("��");
			break;
		case 4:
			printf("��");
			break;
		}
		printf("��(��) ���Խ��ϴ�.\n\n");
	}
}

void main() {
	Exam_5();
}