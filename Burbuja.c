#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ordenamientoBurbuja(int arreglo[], int tamano) {
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tamano=10;

    int *datos = (int *)malloc(tamano * sizeof(int));
    if (datos == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    srand(time(NULL));

    printf("Arreglo original:\n");
    for (int i = 0; i < tamano; i++) {
        datos[i] = rand() % tamano + 1;
        printf("%d ", datos[i]);
    }
    ordenamientoBurbuja(datos, tamano);

    printf("\n\nArreglo ordenado:\n");
    for (int i = 0; i < tamano; i++) {
      //  printf("%d ", datos[i]);
    }

    printf("\n");
    free(datos);
    return 0;
}
