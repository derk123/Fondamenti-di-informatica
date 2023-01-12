#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
#define M 5
#define N 3

int main() {
	int  t[N][M];
	int a,c=0;
	int trouve = 0;
	int trouve_total=0 ;

	printf("entra gli elementi della matrice di ordne (%d, %d)\n",N,M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &t[i][j]);
		}
	}

	for (int i = 0; i < N	; i++) {
		trouve_total = 0;
		for (int j = 0; j < M; j++) {
			if ((t[i][j+1] == 0) && (t[i][j]==0) ) {
		
				trouve = 1;
				trouve_total++;
				continue;
	    
				}
			//}
		}
		trouve = 0;
		if(trouve_total>=3)
		printf("la sequenza e alla riga di indice %d ed e di lunga %d\n", i, trouve_total);
	} */
	/*for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
	
		printf("\n");
		
		}
		if ((trouve_total >= N) && t[i]== 0) {
			printf("la sequenza e alla riga di indice %d ed e di lunga %d\n", i, trouve_total);
*/
		//}
//}
//}
#define N 5
int main() {
	int v[N];
	int flag = 0;

	printf("entra il tuo vettore:");
	scanf("%d", &v[N]);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (v[i] = v[j]) {
				flag++
			}
		}
		printf(" il numero %d e' contenuto %d", v[i], flag);
	}
	return 0;
}