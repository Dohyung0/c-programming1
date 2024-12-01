#include <stdio.h>
#include <string.h>

typedef struct city {
	char name[100];
	char country[100];
	char popu[100];
}City;

City cities[3];

int main()
{
	printf("Input three cities:\n");
	for (int i = 0;i < 3;i++) {
		printf("Name> ");
		fgets(cities[i].name, sizeof(cities[i].name), stdin);
		cities[i].name[strcspn(cities[i].name, "\n")] = 0;

		printf("Country> ");
		fgets(cities[i].country, sizeof(cities[i].country), stdin);
		cities[i].country[strcspn(cities[i].country, "\n")] = 0;

		printf("Population> ");
		fgets(cities[i].popu, sizeof(cities[i].popu), stdin);
		cities[i].popu[strcspn(cities[i].popu, "\n")] = 0;
	}

	printf("Printing the three cities:\n");
	for (int i = 0;i < 3;i++) {
		printf("%d. %s in %s with a population of %s people\n",
			i+1, cities[i].name, cities[i].country, cities[i].popu);
	}
	return 0;
}