#include <stdio.h>
#include <stdlib.h>

int busquedaBinaria(int arreglo[], int tamano, int objetivo) {
    int izquierda = 0;
    int derecha = tamano - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (arreglo[medio] == objetivo) {
            return medio;
        } else if (arreglo[medio] < objetivo) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
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
        datos[i] = i+1;
    }

    int buscar=79378;

    int resultado = busquedaBinaria(datos, tamano, buscar);

    if (resultado != -1) {
        printf("Elemento %d encontrado en la posición %d.\n", buscar, resultado);
    } else {
        printf("Elemento %d no encontrado en el arreglo.\n", buscar);
    }

    free(datos);
    return 0;
}
