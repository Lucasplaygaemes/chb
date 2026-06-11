#include <stdio.h>
#include <stdlib.h>

int main() {
    int inteiro;
    float floate;
    double duplo;
    char carectere;
    long longo;
    long long longo_extendido;
    unsigned int ui;
    
    printf("Int tem o tamanho de %d bytes\n", sizeof(inteiro));
    printf("Float tem o tamanho de %d bytes\n", sizeof(float));
    printf("Double tem o tamanho de %d bytes\n", sizeof(double));   
    printf("Char tem o tamanho de %d bytes\n", sizeof(char));
    printf("long tem o tamanho de %d bytes\n", sizeof(long));
    printf("Long Long tem o tamanho de %d bytes\n", sizeof(longo_extendido));
    printf("Unsigned Integer tem o tamanho de %d bytes\n", sizeof(ui));

    return 0;
    
}

