#include <stdio.h>
#include "aleatorio.h"
char palorand();
int main (void) {
    initAleatorio();
    char palo;
    int maximo=4;
    palo=palorand();
    printf("palo aleatorio %c",palo);
    return 0;
}
