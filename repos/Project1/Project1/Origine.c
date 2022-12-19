#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    float a=0, b=0, c=0, d;

    printf("\n\nprima valore  di a: ", a);
    scanf("%f", &a);
    printf("\nseconda valore di b: ", b);
    scanf("%f", &b);
    printf("\nterza valore  di c: ", c);
    scanf("%f", &c);
    d = b * b - (4 * a * c);
  
    if (d > 0) {

        printf("\nl'equazione a due soluzioni reali distinti");
        
    }
        else {
            if (d == 0) {
               
                printf("\nL’equazione ha due soluzione REALI coincidenti");
            
            }
            else printf("\nl'equazione non ha soluzioni reali");
        }
    }
    
