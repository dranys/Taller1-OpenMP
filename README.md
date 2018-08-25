# Taller1-OpenMP
# Compilar y crear ejecutable de saxpy
# serial
gcc saxpy.c -o saxpy -fopenmp
# paralelo
gcc saxpy_par.c -o saxpy_par -fopenmp
# ------------------------------------------------------------------
# Para compilar y crear ejecutable del cálculo de log natural de 2
# serial:
gcc ln2.c -o ln2 -lm -fopenmp
# paralelo
gcc ln2_par.c -o ln2_par -lm -fopenmp

