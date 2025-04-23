#include <stdio.h>
#include <stdlib.h>
#include "myheader.h"
#define N 3
#define M 4

int main()
{
    char *t[N][M] =
        {{"alma", "dio", "korte", "szilva"},
         {"eper", "cseresznye", "banan", "narancs"},
         {"mandarin", "szolo", "ribizli", "malna"}};
    int i, j;
    char *p;
    printf("%d %d\n\n", N, M);
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < M; ++j)
        {
            if (j > 0)
                putchar(' ');
            printf("*%s*", t[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
    p = longcopy(&t[0][0], N, M);
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < M; ++j)
        {
            if (j > 0)
                putchar(' ');
            printf("*%s*", t[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
    printf("*%s*\n", p);
    free(p);
    return EXIT_SUCCESS;
}