
// Tiene anche conto dei numeri ripetuti, versione più complessa di quella data in traccia

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j, k, l, flag = 0;
    printf("Enter the number of elements in the first vector: ");
    scanf("%d", &n);
    printf("Enter the number of elements in the second vector: ");
    scanf("%d", &m);
    int a[n], b[m];
    printf("Enter the elements of the first vector: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the elements of the second vector: ");
    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);
    for(i = 0; i < n; i++)
    {
        flag = 0;
        for(j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("The vectors are not equal!");
            return 0;
        }
    }
    for(i = 0; i < m; i++)
    {
        flag = 0;
        for(j = 0; j < n; j++)
        {
            if(b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("The vectors are not equal!");
            return 0;
        }
    }
    printf("The vectors are equal!");
    return 0;
}
