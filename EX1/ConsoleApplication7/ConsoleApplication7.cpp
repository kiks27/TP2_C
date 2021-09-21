#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int a = 0;
	int b = 0;
	int produit = 0;
	int r = 0;


	scanf("%d", &a);	scanf("%d", &b);
	produit = produit + b;

	while (produit > 0) {
		produit = produit - 1;
		r = r + a;
	}

	printf("\n %d", r);
}
