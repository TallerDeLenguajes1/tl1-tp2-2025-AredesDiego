#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
}typedef compu;

int main()
{
    srand(time(NULL));
    compu Computadora;

    //valores numeros aleatorios
    Computadora.velocidad = rand() % 3 + 1;
    Computadora.anio = rand() % 10 + 2015;
    Computadora.cantidad_nucleos = rand() % 8 + 1;
    

    return 0;
}