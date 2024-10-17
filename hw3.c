#include<stdio.h>
int main(void) {
	int i, j, k;
	const int NUM_LINE = 25;

	for (i = 1;i <= NUM_LINE;i++) {
		for (j = i;j < NUM_LINE;j++) {
			printf(" ");
		}
		for (k = 1;k <= 2 * i - 1; k++) {
			if (k == 1 || k == 2 * i - 1) {
				printf("*");
			}
			else {
				printf("-");
			}
		}
		printf("\n");
	}
}
