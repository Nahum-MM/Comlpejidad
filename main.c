#include <stdio.h>
#include <stdlib.h>

int busquedaLineal(int arreglo[], int tamano, int objetivo) {
    for (int i = 0; i < tamano; i++) {
        if (arreglo[i] == objetivo) {
            return i;
        }
    }
    return -1;
}

int main() {
    int tamano=10;

    int *datos = (int *)malloc(tamano * sizeof(int));
    if (datos == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    for (int i = 0; i < tamano; i++) {
        datos[i] = i + 1;
    }

    int buscar=9;
    int resultado = busquedaLineal(datos, tamano, buscar);

    if (resultado != -1) {
        printf("Elemento %d encontrado en la posicion %d.\n", buscar, resultado);
    } else {
        printf("Elemento %d no encontrado en el arreglo.\n", buscar);
    }

    free(datos);
    return 0;
}
