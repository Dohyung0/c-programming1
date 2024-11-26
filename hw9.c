#include <stdio.h>

void convert(char str[])
{
	const int diff = 'a' - 'A';

	for (int i = 0;str[i] != 0;i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			 str[i] -= diff;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			 str[i] += diff;
		}
	}

	return;
}

int main()
{
	char str[256];
	printf("Input>");
	fgets(str, sizeof(str), stdin);
	convert(str);
	printf("Output> %s", str);
	return 0;
}