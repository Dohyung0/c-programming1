#include<stdio.h>
int main(void) {
	float k, m;
	printf("Please enter kilometers:");
	scanf_s("%f", &k);
	m = k / 1.609;
	printf("%.1f km is equal to %.1f miles", k,m);
	return 0;
}