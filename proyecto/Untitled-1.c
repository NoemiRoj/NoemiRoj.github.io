#include <stdio.h>

#define t_asien 10
#define fum 1
#define no_fum 2

void pdavor(int asie, int tipo);
int asigasient(int astos[], int inicio, int fin);

int main() {
    int astos[t_asien] = {0}; // 0 indica asiento libre
    int tipo, asie;
    char respuesta;

    while (1) {
        printf("\nSeleccione el tipo de asiento:\n");
        printf("1 - Fumar\n2 - No Fumar\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &tipo);

        if (tipo == fum) {
            asie = asigasient(astos, 0, 4);
            if (asie == -1) { // Sección llena
                printf("Seccion de fumar llena. ¿Desea asiento en no fumar? (s/n): ");
                scanf(" %c", &respuesta);
                if (respuesta == 's' || respuesta == 'S') {
                    asie = asigasient(astos, 5, 9);
                }
            }
        } else if (tipo == no_fum) {
            asie = asigasient(astos, 5, 9);
            if (asie == -1) {
                printf("Seccion de no fumar llena. ¿Desea asiento en fumar? (s/n): ");
                scanf(" %c", &respuesta);
                if (respuesta == 's' || respuesta == 'S') {
                    asie = asigasient(astos, 0, 4);
                }
            }
        } else {
            printf("Opcion invalida. Intente de nuevo.\n");
            continue;
        }

        if (asie != -1) {
            pdavor(asie, tipo);
        } else {
            printf("Next flight leaves in 3 hours.\n");
        }
    }
    return 0;
}

// Función para asignar asiento en el rango indicado
int asigasient(int astos[], int inicio, int fin) {
    for (int i = inicio; i <= fin; i++) {
        if (astos[i] == 0) { // Asiento disponible
            astos[i] = 1;
            return i + 1; // Devolver número de asiento (1-indexado)
        }
    }
    return -1; // No hay asientos disponibles en la sección
}

// Función para imprimir pase de abordaje
void pdavor(int asie, int tipo) {
    printf("\n------------------------------\n");
    printf("  PASE DE ABORDAJE \n");
    printf("Asiento No: %d \n", asie);
    printf("Seccion: %s \n", asie <= 5 ? "Fumar" : "No Fumar");
    printf("------------------------------\n");
}
