#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20
// codigo a completar

int main(){
srand(time(NULL));
int i;
double vt[N];
for(i = 0;i < N; i++)
{
vt[i]= 1+rand()%100;
printf("\n%f", vt[i]);
}
    return 0;
}