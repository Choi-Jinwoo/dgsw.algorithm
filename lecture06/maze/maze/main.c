#include <stdio.h>

int cnt = 0;
int m[10][10] = {
	{ 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 },
	{ 2, 0, 0, 0, 0, 0, 0, 0, 0, 2 },
	{ 2, 0, 2, 2, 2, 2, 2, 2, 2, 2 },
	{ 2, 0, 0, 2, 2, 2, 2, 2, 2, 2 },
	{ 2, 2, 0, 2, 2, 2, 2, 2, 2, 2 },
	{ 2, 2, 0, 2, 2, 2, 2, 2, 2, 2 },
	{ 2, 0, 0, 2, 2, 2, 2, 2, 2, 2 },
	{ 2, 0, 2, 2, 2, 2, 2, 2, 2, 2 },
	{ 2, 3, 2, 2, 2, 2, 2, 2, 2, 2 },
	{ 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 },
};

void visit(int, int);

void main() {
	int i, j;
	visit(1, 1); //start

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%2d", m[i][j]);
		}
		printf("\n");
	}
}

void visit(int i, int j) {
	m[i][j] = 1;
	cnt++;

	if (m[i][j + 1] == 0) { //��
		visit(i, j + 1);
	}
	if (m[i + 1][j] == 0) { //��
		visit(i + 1, j);
	}
	if (m[i][j - 1] == 0) { //��
		visit(i, j - 1);
	}
	if (m[i - 1][j] == 0) { //��
		visit(i - 1, j);
	}
}