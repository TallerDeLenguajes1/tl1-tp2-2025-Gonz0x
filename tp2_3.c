#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 5
#define M 7
int main(){
srand(time(NULL));
int i,j;
int mt[N][M];
int **puntero = (int **)malloc(N * sizeof(int*));

for(i = 0;i<N; i++)
{   
    puntero[i] = (int *)malloc(M * sizeof(int));
    for(j = 0;j<M; j++)
    {
        puntero[i][j]=1+rand()%100;
        printf("%d ", puntero[i][j]);
    }
    printf("\n");
}
for (i = 0; i < N; i++)
{
    free(puntero[i]);
}

free(puntero);

return 0;
}
