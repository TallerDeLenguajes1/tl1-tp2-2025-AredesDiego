#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    #define N 20 
    int i; 
    double* vt = (double *)malloc(N * sizeof(double)); 


    for(i = 0;i<N; i++) 
    {  
        vt[i]=1+rand()%100; 
        printf("%lf", vt[i]);
    } 
    free(vt); 
    return 0;
}