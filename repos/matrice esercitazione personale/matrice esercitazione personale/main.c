#define _CRT_SECURE_NO_WARGNINGS
// #pragma warning(disable : 4996).
#include <stdio.h>

#include <stdlib.h>

#define m 3
#define n 4
#define p 3
int main() {

	int a[m][n];
	int b[n][p];
	int c[m][p];
	int somme = 0;

	printf("entra gli elementi della prima matrice A di ordine (%d, %d) \n",m,n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			scanf_s("%d ", &a[m][n]);
		}
	}
	printf("\n");

	printf("entra gli elementi della matrice B di ordine (%d, %d) \n", m, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {

			scanf_s("%d ", &b[n][p]);
		}
		printf("\n");
	}

	

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < p; j++) {

				somme = 0;

				for (int k = 0; k < n; k++) {
					somme +=  a[i][k] * b[k][j];
				}

				c[i][j] = somme;
			}
		}
	
	
		printf("\n");
		printf("\nA * B = \n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {

			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	return 0;

}
