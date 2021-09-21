#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <iostream>

int main()
{
	int age, nbCinema, nbFastFood, liste = 0;
	char sexe, YesNo, QuickMcdo;

	printf("Indiquer votre age\n");
	scanf("%d", &age);

	printf("Indiquer votre sexe (M pour masculin, F pour féminin)\n");
	scanf("%c", &sexe);

	printf("Indiquez le nombre de fois ou vous allez au cinema par mois\n");
	scanf("%d", &nbCinema);

	printf("Vous préférez le Quick ou le McDonalds ?");
	scanf("%c", &QuickMcdo);

	printf("Indiquer le nombre de fois ou vous allez au fastfood par mois\n");
	scanf("%d", &nbFastFood);

	printf("Pratiquez vous un sport ? (y pour Oui, n pour Non)\n");
	scanf("%c", &YesNo);

	printf("Pratiquez vous un sport parmis la liste suivante ? 1 pour Foot, 2 pour Tennis, 3 pour Basket, 4 pour Judo, 5 pour Natation ");
	scanf("%d", &liste);


	printf(" Vous êtes un(e) %c et vous avez %d age\n. Vous allez %d fois au cinema par mois, vous préférez le %c et vous y aller %d fois par mois.", sexe, age, nbCinema, QuickMcdo, nbFastFood);
};

/* On désire effectuer un questionnaire auprès des élèves d’un lycée afin de connaître
mieux leurs activités extra-scolaires.
Réalisez un programme demandant à chaque élève, son âge, son sexe, le nombre
de fois où il va au cinéma par mois, si il préfère le Quick ou le Mac Donald, le nombre
de fois où il y va par mois, si il pratique un sport et si oui pratique t-il un sport parmi :
foot, tennis, basket,judo, natation ? Quand l’élève a entré toutes les informations,
affichez lui le récapitulatif des réponses à son questionnaire , puis passez à l’élève
suivant. */
