#include<stdio.h>
int main(void) {
	int i, j, k;

	for (i = 1;i <= 5;i++) {
		for (j = i;j < 5;j++) {
			printf(" ");
		}
		for (k = 1;k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}