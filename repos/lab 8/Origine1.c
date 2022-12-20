#include<stdio.h>
#include <stdlib.h>

#define N 3
#define M 5
int main(void) {
	int a[N][M];
	int trouve = 0;
	int total_trouve = 0;

	printf("entra gli elementi della matrice di ordine (%d, %d)", N, M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		total_trouve = 0;
		for (int j = 0; j < M; j++) {
			if (a[i][j] == 0)
				trouve = 1;
			total_trouve++;
		}
		if (total_trouve >= 3)
			printf("la sequenza e' alla riga di indice %d ed e' lunga %d", i, total_trouve);
		prinrf("\n");
		trouve = 0;
	}




	return EXIT_SUCCESS;
}