#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numerosecreto = 0;
    int numerojugador = 1;
    srand(time(NULL));
    numerosecreto = (rand() % 100 + 1);
    do {
        printf("Adivina el numero: ");
        scanf("%d", &numerojugador);
        if (numerosecreto < numerojugador) {
            printf("Te pasaste, el numero es mas pequeño\n");
        }
            else
            if (numerosecreto > numerojugador) {
            printf("Te quedaste corto, el numero es mas grande\n");
        }
            else
            if (numerosecreto == numerojugador){
            printf("Adivinaste el numero!!\n");
        }
        } while (numerosecreto != numerojugador);
        return 0;
    }