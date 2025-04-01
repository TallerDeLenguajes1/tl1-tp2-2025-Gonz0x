#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 5
#define M 7
int main(){
srand(time(NULL));
int i,j;
int mt[N][M];
int (*puntero)[M] = mt;

for(i = 0;i<N; i++)
{
    for(j = 0;j<M; j++)
    {
        puntero[i][j]=1+rand()%100;
        printf("%d", puntero[i][j]);
    }
    printf("\n");
}
return 0;
}
