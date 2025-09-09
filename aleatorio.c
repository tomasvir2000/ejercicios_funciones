#include "aleatorio.h"
#include <stdio.h>
#include "aleatorio.h"
int lanzarDado() {
    return numeroAleatorio(6) + 1;
}
int numeroAleatorioConRango(int minimo, int maximo) {
    int rango = maximo - minimo;
    return numeroAleatorio(rango) + minimo;
}
int numeroAleatorio(int maximo) {
    // initAleatorio();
    return rand()%maximo;
}
void initAleatorio() {
    srand(time(NULL));
}
int generaLadoFicha() {
    int lado = numeroAleatorio(7);
    return lado;
}
char palorand() {
    char palo;
    switch (numeroAleatorio(4)) {
        case 0:
            palo = 'c';
            break;
        case 1:
            palo= 'p';
            break;
            case 2:
            palo='t';
            break;
            case 3:
            palo= 'd';
            break;
    }
    return palo;
}