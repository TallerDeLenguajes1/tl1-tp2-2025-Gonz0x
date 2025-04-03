#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu {
 int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
 int anio; // Año de fabricación (valor entre 2015 y 2024)
 int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
 char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
}typedef computadora;

void listarPCs(computadora pcs[], int cantidad);
void mostrarMasVieja(computadora pcs[], int cantidad);
void mostrarMasVeloz(computadora pcs[], int cantidad);


int main(){    
    srand(time(NULL));
    int cantidad = 5;
    computadora *pcs = (computadora *)malloc(cantidad * sizeof(computadora)); //asignacion dinamica de memoria
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
        "Pentium"};
    //computadora pcs[5]; //variable arreglo de 5 elementos para almacenar las caracteristicas de las 5 pcs, la hago utilizando asignacion dinamica de memoria

    for (int i = 0; i < 5; i++)
    {    //valores aleatorios
        pcs[i].velocidad = 1+rand()%3;
        pcs[i].anio = 2015+rand()%10;
        pcs[i].cantidad_nucleos = 1+rand()%8;
        int indice_aleatorio= rand() % 6;
        pcs[i].tipo_cpu = tipos[indice_aleatorio]; //para cada pc generada el campo tipo_cpu
        //de la estructura apunta a una cadena seleccionada aleatoriamente del arreglo tipos
    }

    //listarPCs(pcs, cantidad);
    mostrarMasVieja(pcs, cantidad); 
    mostrarMasVeloz(pcs, cantidad);

    for (int i = 0; i < cantidad; i++)
    { //liberacion de memoria
        free(pcs[i].tipo_cpu);
    }
    free(pcs);
    

    return 0;
}

void listarPCs(computadora pcs[], int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        printf("\nPC:%d", i+1);
        printf("\nVelocidad: %d", pcs[i].velocidad);
        printf("\nAnio: %d", pcs[i].anio);
        printf("\nCantidad de nucleos: %d", pcs[i].cantidad_nucleos);
        printf("\nProcesador: %s", pcs[i].tipo_cpu);
    }
    
}
void mostrarMasVieja(computadora pcs[], int cantidad){
    int menor = 0;
    printf("\nPC mas vieja:");
    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].anio < pcs[menor].anio)
        {
            menor = i;
        }
        
    }
    printf("\nVelocidad: %d", pcs[menor].velocidad);
    printf("\nAnio: %d", pcs[menor].anio);
    printf("\nCantidad de nucleos: %d", pcs[menor].cantidad_nucleos);
    printf("\nProcesador: %s", pcs[menor].tipo_cpu);
}

void mostrarMasVeloz(computadora pcs[], int cantidad){
    printf("\nPC mas veloz:");
    for (int  i = 0; i < cantidad; i++)
    {
        if (pcs[i].velocidad == 3)
        {
            printf("\nVelocidad: %d", pcs[i].velocidad);
            printf("\nAnio: %d", pcs[i].anio);
            printf("\nCantidad de nucleos: %d", pcs[i].cantidad_nucleos);
            printf("\nProcesador: %s", pcs[i].tipo_cpu);
        }
        
    }
    
}

