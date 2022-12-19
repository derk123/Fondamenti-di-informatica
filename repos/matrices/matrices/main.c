#define _CRT_SECURE_NO_WARGNINGS
#pragma warning(disable : 4996)
#include <stdio.h>

#include <stdlib.h>

#define LIGNES 2
#define COLS 3

/*int main() {
    int A[LIGNES][COLS];
    int B[LIGNES][COLS];
    int C[LIGNES][COLS];

    printf("entre les elements della matrice A de taille (%d, %d) \n", LIGNES, COLS);

    for (int i = 0; i < LIGNES; i++) {

        for (int j = 0; j < COLS; j++) {

            scanf("%d", &A[i][j]);
        }
    }

    printf("entre les elements della matrice B de la taille (%d, %d) \n", LIGNES, COLS);

    for (int i = 0; i < LIGNES; i++) {

        for (int j = 0; j < COLS; j++) {

            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < LIGNES; i++) {

        for (int j = 0; j < COLS; j++) {

            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nla somma de A+B= \n");
    for (int i = 0; i < LIGNES; i++) {

        for (int j = 0; j < COLS; j++) {

            printf(" %d", C[i][j]);
            //scanf("%d", &C[i][j]);
        }printf("\n");
    }
     
     return 0;
}*/

int main() {

    int A[LIGNES][COLS];
    //int B[LIGNES][COLS];
    //int C[LIGNES][COLS];
    int x=0;
    printf("entre le nombre d'elements de la matrice A de Taille (%d,%d) \n", LIGNES, COLS);
    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLS; j++) {

            scanf("%d", &A[i][j]);
        }
    }

    printf("entre la valeur du scalaire : ");
    scanf("%d", &x);

    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLS; j++) {
            A[i][j] = x * A[i][j];
            printf("\n");
        }
        printf("\n");
    }

    printf ("\nle produit scalare X * A = \n");

    for (int i = 0; i < LIGNES; i++) {

        for (int j = 0; j < COLS; j++) {

            printf("%d", A[i][j]);

            
        }

        printf("\n");
    }

  //  printf("entra le nombre d'elements de la matrices B de taille (%d, %d) \n", LIGNES, COLS);

    //for (int i = 0; i < LIGNES; i++) {
      //  for (int j = 0; j < COLS; j++) {

        //    scanf("%d", &B[i][j]);
        //}
    //}



/*    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLS; j++) {
            
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nla somme de A+B = \n");

    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLS; j++) {

            printf("%d", C[i][j]);
        }
        printf("\n");
    }*/
    return 0;
}
