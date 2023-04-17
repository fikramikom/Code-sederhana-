#include <stdio.h>
int imax, temp, n, i, j, A[100];
main()
{
    printf("Masukan Banyak Data = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Input A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    for (i = 1; i <= n; i++)
    {
        imax = i;

        for (j = i + 1; j <= n; j++)
        {
            if (A[j] < A[imax])
                imax = j;
        }

        temp = A[imax];
        A[imax] = A[i];
        A[i] = temp;
    }

    printf("\n");
    printf("A =[ ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("]");

    return 0;
}