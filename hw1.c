#include<stdio.h>
int main(void) {
	int one, two;
	printf("Input two integers:");
	scanf_s("%d %d", &one, &two);
	printf("%d & %d = %d\n", one, two, one & two);
	printf("%d | %d = %d\n", one, two, one | two);
	printf("%d ^ %d = %d\n", one, two, one ^ two);
	return 0;
}

