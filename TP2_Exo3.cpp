#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <iostream>

int main()
{
	int poids;
	poids = 0;

	printf("Donnez le poids de votre lettre en gramme\n");
	scanf("%d", &poids);

		if (poids < 20) {
			printf("Le tarif d'affranchissement de votre lettre est de 3.00 frs");
		};
		
		if (poids >= 20 && poids < 50) {
			printf("Le tarif d'affranchissement de votre lettre est de 3.95 frs");
		};

		if (poids >= 50) {
			printf("Le tarif d'affranchissement de votre lettre est de 5.90 frs");
		};
};

/* Les tarifs d’affranchissement d’une lettre sont les suivants :
Au dessous de 20 g : 3.00 frs
A partir de 20 g et endessous de 50 g : 3.95 frs
A partir de 50 g : 5.90 frs
Ecrire le programme qui délivre le tarif pour un poids (donné au clavier). */