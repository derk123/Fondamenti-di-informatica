#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 6


int main(void) {
	int v1[N];
	int v2[N];
	int flag = 0;
	int trouve = 0;
	int a;
	int flag1 = 0;
	int v[N] = {0};
	printf("entra la valore del vettore 1: ");

	for (int i = 0; i < N; i++) {
		scanf("%d", &v1[i]);
	}
	printf("\n");

	printf("entra gli elementi del vettore 2:");

	for (int i = 0; i < N; i++) {
		scanf("%d", &v2[i]);
	}

	for (int i = 0; i < N; i++) {
		trouve = 0;
		for (int j = 0; j < N && trouve==0; j++) {
			v[0] = v1[0];
				if((v1[i]==v2[j])&&(v[0]==v2[j])) {
				 a = v1[i];
				 flag1++;
				}
			
			if (v1[i] == v2[j]) {
				trouve = 1;
				flag++;
			}
		}
		if (trouve == 0){
			printf("i vettori non sono gli stessi");
			break;
		}
	}
	
	

	
	if (flag==N) {
		printf("gli vettori sono gli stessi ed %d compare %d volte in ciascun vettore ", a, flag1 );
	}
	
	
	return 0;
}

/*
int main() {
	int v[N];
	int v1[N] = {0};
	int v2[N] = {0};
	int s = 0;
	int flag = 0;
	int trouve = 0;
	printf("entra il valore del primo vettore: ");
	for (int i = 0; i < N; i++) {
		scanf("%d", &v[i]);
	}

	for (int i = 0; i < N; i++) {
		flag = 0;
		for(int j=0;j<N;j++){
		if (v[i] == v1[j]) {
			flag = 1;
		}
		}
		v1[s] = v[i];
		if(flag==0){
		   for (int j = 0; j < N; j++) {
			   if (v[i]== v[j]) {
				  v2[s]++;
				  
			   }
			   
		   }

		   s++;
		}
		
		
	}
	for (int i = 0; i < s; i++) {
		printf("il numero %d e' contenuto %d\n", v1[i], v2[i]);
	}
}*/


 
