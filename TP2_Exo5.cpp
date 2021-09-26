#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int main() {
    int valeurLigne = 1;
    int valeurColonne;
    int valeur;

    printf("        1       2       3       4       5       6       7       8       9       10\n");
    while (valeurLigne <= 10) {
        printf("%d", valeurLigne);
        valeurColonne = 1;

            while (valeurColonne <= 10){
                valeur = valeurLigne*valeurColonne;
                printf("\t%d",valeur);
                valeurColonne++;
            }

        printf("\n");
        valeurLigne++;
    }
}
