#include <stdio.h>

/*int main() {
	int n = 1;
	int i = 0, prod = 1;

	scanf_s("%d", &n);
	while (n != 0) {
		scanf_s("%d", &n);
		prod = prod * n;

	}

	printf("il prodotto � %f\n", prod);
	return 0;
}*/

 int main(){
	int n ;
	int i = 0, sum = 0;
	float media;

	scanf_s("%d", &n);

	while (n != 0) {
		sum = sum + n;
		scanf_s("%d", &n);
		i++ ;
	}
	media = (float)sum / i;
	printf("la media � : %f\n" , media);

	return 0;
}


/*int main() {
	int n;
	int sum=0;
	int i=0;
	float media;



	do {
		scanf_s("%d", &n);
		if (n != 0) {
			sum = sum + n;
			i++;
		}
	}
	media = (float)sum / i;
	printf("la media � : %f\n", media);
}*/


