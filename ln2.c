#include<stdio.h>
#include <math.h>
#include <omp.h>


static long sum_limit = 100000000;//número de sumas a realizar en la serie

int main() {
    double start_time, run_time;//variables para el calculo del tiempo
    long i;
    double x;
    double ln2 = 0;// la convergencia de la suma
    double uno = -1*1.0;

    start_time = omp_get_wtime();
   
    
    for (i = 1; i < sum_limit; i++)
    {
        x = (pow(uno,i+1.0))/i;// calculo de cada suma
        ln2 = ln2 + x;//se suma cada resultado parcial
    }

    run_time = omp_get_wtime() - start_time;//se calcula el tiempo tomado

    printf("ln 2 = %f  con %li pasos, duracion %f segundos\n",ln2,sum_limit,run_time);
    
    
    return 0;
}