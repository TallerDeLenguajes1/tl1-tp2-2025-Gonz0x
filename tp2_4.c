#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct compu {
 int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
 int anio; // Año de fabricación (valor entre 2015 y 2024)
 int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
 char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
}typedef computadora;

int main(){
    srand(time(NULL));
    int velocidad = 0, anio = 0, nucleos = 0;
    velocidad = 1+rand()%3;
    anio = 2015+rand()%2024;
    nucleos = 1+rand()%8;

    return 0;
}


