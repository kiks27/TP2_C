#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int p = 0;

	printf("Indiquez le poids de la lettre \n");
	scanf("%d", &p);

	if (p < 20) {
		printf("\n Le prix a payer est de 3.00frs");
	}
	if (p >= 20 && p<50) {
		printf("\n Le prix a payer est de 3.95frs");
	}
	if (p >= 50) {
		printf("\n Le prix a payer est de 5.90frs");
	}

}
