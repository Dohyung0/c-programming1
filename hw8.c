#include <stdio.h>
#include <math.h>

double arr[5];
double s, m, a, v, sig;

void solve(double arr[], int size)
{
	for (int i = 0;i < size;i++) {
		s += arr[i];
	}

	m = s / size;

	for (int i = 0;i < size;i++) {
		a += pow(arr[i] - m, 2);
	}

	v = a / size;

	sig = sqrt(v);

	return;
}

int main()
{
	printf("Enter 5 real numbers: ");
	for (int i = 0;i < 5;i++) {
		scanf_s("%lf", &arr[i]);
	}
	solve(arr, sizeof(arr)/ sizeof(double));
	printf("Standard Deviation = %.3lf", sig);
	return 0;
}