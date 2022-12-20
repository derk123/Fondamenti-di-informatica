#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 5
int main(void) {
	int a[N][M];
	int c=0;
	int trouve = 0;
	int total_trouve = 0;
	int trouve1 = 0;
	int total_trouve1 = 0;
	int flag = 0;
	int flag1 = 0;
	int b=0;

	printf("metti gli elementi da cercare cosi(elemnti,altro da cercare)\n");
	scanf("(%d,%d)", &b, &c);
	printf("entra gli elementi della matrice di ordine (%d, %d)\n", N, M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	for (int i = 0; i < N; i++) {
		total_trouve = 0;
		flag1 = 0;
		for (int j = 0; j < M; j++) {
			
			if (a[i][j] == b){
				trouve = 1;
			total_trouve++;
			}
			if (i == 0) {
				if ((a[i][j]) == (a[i][j - 1])) {
					b = a[i][j];
					flag = 1;
					flag1++;
				}

			}

			
		}

		if (total_trouve >= c || total_trouve ==c){
			printf("la sequenza e' alla riga di indice %d ed e' lunga %d", i, total_trouve);

		}

		printf("\n");
		flag = 0;
		trouve = 0;
	}

	for (int j = 0; j < M; j++) {
		total_trouve1 = 0;
		for (int i = 0; i < N; i++) {
			if (a[i][j] == 0) {
				trouve1 = 1;
				total_trouve1++;
			}
		}
		if (total_trouve1>=3) {
			printf("la sequenza di colone di indice %d, ed e' lunga %d", j, total_trouve1);
			printf("\n");
		}
		trouve1 = 0;
	}




	return EXIT_SUCCESS;
}