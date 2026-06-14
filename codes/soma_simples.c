#include <stdio.h>
int a;
int b;
int funcao_soma() {
    int a = 10;
    int b = 20;
    int c = a + b;
    return c;
}
int main() {
    printf("O valor da soma é: %d\n", funcao_soma());
    return 0;
}
