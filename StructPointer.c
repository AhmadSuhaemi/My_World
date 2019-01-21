#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int **pnum;

    pnum = (int **) malloc(4  *sizeof(int *));

    pnum[0] = (int *) malloc(1 * sizeof(int));
    pnum[1] = (int *) malloc(2 * sizeof(int));
    pnum[2] = (int *) malloc(3 * sizeof(int));
    pnum[3] = (int *) malloc(4 * sizeof(int));

    pnum[0][0] = 1;
    pnum[1][0] = 2;
    pnum[1][1] = 3;
    pnum[2][0] = 1;
    pnum[2][1] = 2;
    pnum[2][2] = 1;
    pnum[3][0] = 8;
    pnum[3][1] = 8;
    pnum[3][2] = 8;
    pnum[3][3] = 8;
    pnum[4][0] = 6;
    pnum[4][1] = 4;
    pnum[4][2] = 3;
    pnum[4][3] = 2;
    pnum[4][4] = 1;

    for (i = 0; i < 4; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d", pnum[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) {
        free(pnum[i]);
    }

    free(pnum);

  return 0;
}
