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

void completado(compu * Computadora);
void listarPCs(compu * Computadora);

int main()
{
    srand(time(NULL));
    #define compu_tam 5
    compu *Computadora = (compu*)malloc(compu_tam * sizeof(compu));

    completado(Computadora);
    listarPCs(Computadora);

    return 0;
}

void completado(compu * Computadora)
{
    for (int i = 0; i < 5; i++)
    {
        //valores numeros aleatorios
        Computadora[i].velocidad = rand() % 3 + 1;
        Computadora[i].anio = rand() % 10 + 2015;
        Computadora[i].cantidad_nucleos = rand() % 8 + 1;

        //Tipos de Procesador
        char tipo[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
        Computadora[i].tipo_cpu = tipo[rand()% 6 + 1];
    }
}

void listarPCs(compu * Computadora)
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n\n---------Compu numero 1:");
        printf("\nVelocidad: %d", Computadora[i].velocidad);
        printf("\nAnio: %d", Computadora[i].anio);
        printf("\ncantidad_nucleos: %d", Computadora[i].cantidad_nucleos);
        printf("\ncantidad_nucleos: %d", Computadora[i].tipo_cpu);
    }
    
}