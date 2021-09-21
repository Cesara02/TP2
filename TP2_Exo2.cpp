#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <iostream>

int main()
{
	int nb1, nb2, nb3 = 0;

	printf("Entrez un 1er nombre\n");
	scanf("%d", &nb1);
	printf("Entrez un 2nd nombre\n");
	scanf("%d", &nb2);
	printf("Entrez un 3e nombre\n");
	scanf("%d", &nb3);

	if (nb1 > nb2 && nb1 > nb3 && nb2 > nb3) {
		printf("Voici vos valeurs dans l'ordre croissants: %d , %d , %d", nb3, nb2, nb1);
	};

	if (nb1 > nb2 && nb1 > nb3 && nb3 > nb2) {
		printf("Voici vos valeurs dans l'ordre croissants: %d , %d , %d", nb2, nb3, nb1);
	};

	if (nb2> nb1 && nb2 > nb3 && nb1 > nb3) {
		printf("Voici vos valeurs dans l'ordre croissants: %d , %d , %d", nb3, nb1, nb2);
	};

	if (nb2 > nb1 && nb2 > nb3 && nb3 > nb1) {
		printf("Voici vos valeurs dans l'ordre croissants: %d , %d , %d", nb1, nb3, nb2);
	};

	if (nb3 > nb1 && nb3 > nb2 && nb1 > nb2) {
		printf("Voici vos valeurs dans l'ordre croissants: %d , %d , %d", nb2, nb1, nb3);
	};

	if (nb3 > nb1 && nb3 > nb2 && nb2 > nb1) {
		printf("Voici vos valeurs dans l'ordre croissants: %d , %d , %d", nb1, nb2, nb3);
	};
};

/* Ecrire un programme qui permet d’entrer 3 nombres entiers au clavier, puis les
affiche à l’écran dans l’ordre croissant.*/
