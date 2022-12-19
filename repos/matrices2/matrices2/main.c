#define _CTR_SECURE_NO_WARGNINGS
#pragma warning(disable : 4996)
#include <stdio.h>

#include <stdlib.h>

#define N 4
#define M 4

int main() {

	int  A[N][M];
	int  B[N][M];
	int  C[N][M];

	int c=0;

	printf("\n\nentrer les elements de la premiere matrice A d'ordre (%d, %d) \n", N, M);

	for (int i = 0; i < N; i++) {

		for (int j = 0; j < M; j++) {

			scanf("%d", &A[i][j]);

			//printf("\n");
		}
	}
	printf("\n\nentrer les elements de la premiere matrice B d'ordre (%d, %d) \n", N, M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {

			scanf("%d", &B[i][j]);

			//printf("\n");
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {

			C[i][j] = A[i][j] + B[i][j];
			//printf("\n");
		}
	}

	printf("\n\nla somme des matrices A et B est C: \n");
	
	for (int i = 0; i <	N; i++) {
		for (int j = 0; j < M; j++) {

			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}