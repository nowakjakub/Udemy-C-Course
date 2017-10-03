#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    
    double a, b, suma;

    a = atof(argv[1]);
    b = atof(argv[2]);
    suma = a + b;

    printf("Suma jest równa %.2f \n", suma);

    return 0;
}