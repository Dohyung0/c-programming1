#include <stdio.h>

int main()
{
	int arr[5];
	int odd[5];
	int even[5];
	int odx = 0, edx = 0;

	printf("Please input five integers: ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i], sizeof(arr));
	}
	for (int i = 0;i < 5;i++) {
		if (arr[i] % 2 != 0) {
			odd[odx] = arr[i];
			odx++;
		}
		else {
			even[edx] = arr[i];
			edx++;
		}
	}
	printf("Odd numbers: ");
	for (int i = 0;i < odx;i++) {
		printf("%d ", odd[i]);
	}

	printf("\n");

	printf("Even numbers: ");
	for (int i = 0;i < edx;i++) {
		printf("%d ", even[i]);
	}
	return 0;
}