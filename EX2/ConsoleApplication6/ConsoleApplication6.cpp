#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("Ce programme classe 3 nombres dans l'ordre croissant\n\n");
	printf("Entrez un premier nombre\n");
	scanf("%d", &a);
	printf("Entrez un second nombre\n");
	scanf("%d", &b);
	printf("Entrez un troisieme nombre\n");
	scanf("%d", &c);

	if (a < b && b < c) {
		printf("\n %d", a);
		printf(" < %d", b);
		printf(" < %d", c);
	}

	if (b < a && a < c) {
		printf("\n %d", b);
		printf(" < %d", a);
		printf(" < %d", c);
	}

	if (a < c && c < b) {
		printf("\n %d", a);
		printf(" < %d", c);
		printf(" < %d", b);
	}

	if (c < a && a < b) {
		printf("\n %d", c);
		printf(" < %d", a);
		printf(" < %d", b);
	}

	if (c < b && b < a) {
		printf("\n %d", c);
		printf(" < %d", b);
		printf(" < %d", a);
	}

	if (b < c && c < a) {
		printf("\n %d", b);
		printf(" < %d", c);
		printf(" < %d", a);
	}

	_getch();
}