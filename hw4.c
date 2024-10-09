#include<stdio.h>
int main(void) {
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	if (num % 1 == 0 && num % num == 0) {
		printf("It is a prime number.");
	}
	else {
		printf("It is not a prime number.");
	}
}