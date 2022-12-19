#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {

	int n , a, b, c, d,e,f,t,r ,s,l,z;

	float media;
	printf_s("entrer le nombre n:");
	scanf("%d", &n);
	printf_s("entrer le nombre a:");
	scanf("%d", &a);
	printf_s("entrer le nombre b:");
	scanf("%d", &b);
	printf_s("entrer le nombre c:");
	scanf("%d", &c);
	printf_s("entrer le nombre d:");
	scanf("%d", &d);
	printf_s("entrer le nombre e:");
	scanf("%d", &e);
	printf_s("entrer le nombre f:");
	scanf("%d", &f);
	printf_s("entrer le nombre t:");
	scanf("%d", &t);
	printf_s("entrer le nombre r:");
	scanf("%d", &r);
	printf_s("entrer le nombre s:");
	scanf("%d", &s);
	printf_s("entrer le nombre l:");
	scanf("%d", &l);
	printf_s("entrer le nombre z:");
	scanf("%d", &z);

	media = (a + b + c + d + e + f + t + r + s + l + z) / 11;
	switch (media>n) {

	case 1:
		printf_s("la media  est:%f", media);
		break;

	default:
		printf_s("errore la media deve essere maggiore di n");
	}
}