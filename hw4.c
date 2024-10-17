#include <stdio.h>
int main()
{
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	for (int i = 2; i < num / 2; i++) {
		if (num % i == 0) {
			printf("It is not a prime number. \n");
			return 0;
		}
	}
	printf("It is a prime number. \n");
}
