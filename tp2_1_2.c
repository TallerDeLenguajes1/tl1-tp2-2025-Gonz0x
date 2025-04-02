#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20
// codigo a completar

int main(){
srand(time(NULL));
int i;
double vt[N];
double *puntero = vt;
for(i = 0;i < N; i++)
{
    puntero[i] = 1+rand()%100;
    printf("\n%2.f", puntero[i]);
}
    return 0;
}