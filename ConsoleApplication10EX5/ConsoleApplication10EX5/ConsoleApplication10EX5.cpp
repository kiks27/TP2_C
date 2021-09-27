#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int
main(void) {
	int i, j;
	int x = 0;

	x = 0;

	printf("Entrez une valeur entre 2 et 11 \n");

	scanf("%d", &x);

	if (x >= 2 && x <= 11) {
		printf("   |");
		for (i = 1; i < x; ++i)
			printf("%#3d   ", i);
		printf("\n");

		for (i = 1; i < 64; ++i)
			printf("-");
		printf("\n");

		for (i = 1; i < x; ++i) {
			printf("%#2d |", i);
			for (j = 1; j < x; ++j)
				printf("%#3d   ", i * j);
			printf("\n");
		}
	}

	_getch();
}