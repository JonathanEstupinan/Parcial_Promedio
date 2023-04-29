#include <stdio.h>
#include <stdlib.h>

// Función para ingresar notas de los estudiantes
void ingresar_notas(float notas[], int num_estudiantes) {
    printf("Ingreso de notas:\n");
    for (int i = 0; i < num_estudiantes; i++) {
        printf("Ingrese la nota del estudiante %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    printf("Notas ingresadas correctamente.\n\n");
}

// Función para calcular el promedio de las notas
float calcular_promedio(float notas[], int num_estudiantes) {
    float suma_notas = 0;
    for (int i = 0; i < num_estudiantes; i++) {
        suma_notas += notas[i];
    }
    return suma_notas / num_estudiantes;
}

// Función para calcular el valor más alto de las notas
float calcular_valor_maximo(float notas[], int num_estudiantes) {
    float valor_maximo = notas[0];
    for (int i = 1; i < num_estudiantes; i++) {
        if (notas[i] > valor_maximo) {
            valor_maximo = notas[i];
        }
    }
    return valor_maximo;
}

int main() {
    int opcion;
    int num_estudiantes = 3;
    float notas[3] = {0};

    printf("Bienvenido al sistema de gestion de notas.\n\n");
    printf("Seleccione su rol:\n");
    printf("1. Profesor\n");
    printf("2. Estudiante\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            // Acciones para el profesor
            ingresar_notas(estudiantes, 3);
        break;
      case 2:
        consultar_notas(estudiantes, 3);
        break;
      case 3:
        printf("Adios.\n");
        return 0;
      default:
        printf("Opcion invalida.\n");
            break;
        case 2:
            // Acciones para los estudiantes
            printf("Seleccione la acción que desea realizar:\n");
            printf("1. Consultar sus notas\n");
            printf("2. Conocer el promedio de sus notas\n");
            printf("3. Conocer el valor más alto de sus calificaciones\n");
            printf("Opcion: ");
            scanf("%d", &opcion);

            switch (opcion) {
                case 1:
                    // Consultar notas
                    printf("Notas:\n");
                    for (int i = 0; i < num_estudiantes; i++) {
                        printf("Estudiante %d: %.2f\n", i + 1, notas[i]);
                    }
                    printf("\n");
                    break;
                case 2:
                    // Calcular promedio
                    printf("El promedio de sus notas es: %.2f\n\n", calcular_promedio(notas, num_estudiantes));
                    break;
                case 3:
                    // Calcular valor máximo
                    printf("El valor más alto de sus calificaciones es: %.2f\n\n", calcular_valor_maximo(notas, num_estudiantes));
                    break;
                default:
                    printf("Opcion no válida.\n\n");
            }

            break;
        default:
            printf("Opcion no válida.\n\n");
    }

    return 0;
}
