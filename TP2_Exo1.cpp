#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <iostream>

int main()
{
	int i, a, b, total = 0;

	printf("Saisir une valeur\n");
	scanf("%d", &a);
	printf("Saisir une autre valeur\n");
	scanf("%d", &b);

	for (i = 1; i <= abs(b); i++)
	{
		total = total + a;
	}

	if (b < 0) {
		total = -total;
	}

	printf("Le produit de %d et de %d est de %d", a, b, total);
}

/* Ecrire un programme qui calcule le produit de 2 nombres a et b, sans utiliser
l’opération de multiplication. */