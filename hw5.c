#include <stdio.h>
void solve(n)
{
	if (n == 0) {
		return;
	}

	solve(n / 2);
	printf("%d", n % 2);
}

int main(void)
{
	int n;
	printf("Please enter a number: ");
	scanf_s("%d", &n);
	if (n == 0) {
		printf("0");
	}
	solve(n);
}
