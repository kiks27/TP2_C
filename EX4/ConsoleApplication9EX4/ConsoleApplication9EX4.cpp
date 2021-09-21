#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int age = 0;
	char genre[100];
	int cinema = 0;
	char qm[100];
	int qmf = 0;
	char s[100];
	char sp[100];

	printf("Indiquez votre age :\n");
	scanf("%d", &age);

	printf("Indiquez votre genre :\n");
	scanf("%s", &genre);

	printf("Indiquez le nombre de fois ou vous allez au cinema par mois :\n");
	scanf("%d", &cinema);

	printf("Indiquez si vous preferez Quick ou Mcdo :\n");
	scanf("%s", &qm);

	printf("Indiquez le nombre de fois ou vous y allez par mois :\n");
	scanf("%d", &qmf);

	printf("Indiquez si vous pratiquez un sport :\n");
	scanf("%s", &s);

	printf("Si oui, indiquez si vous pratiquez un de ces sports : foot, tennis, basket, judo, natation, autre/rien\n");
	scanf("%s", &sp);

	printf("\n Recapitulatif :");
	printf("\n Age : %d", age);
	printf("\n Genre : %s", genre);
	printf("\n Nombre de fois au cinema par mois : %d", cinema);
	printf("\n Quick ou Mcdo : %s", qm);
	printf("\n Nombre de fois au Quick ou Mcdo par mois : %d", qmf);
	printf("\n Pratique un sport : %s", s);
	printf("\n Pratique un sport parmi la liste : %s", sp);



	_getch();
}