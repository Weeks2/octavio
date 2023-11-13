#include <stdio.h>
int main() {
    // Variables
    int count, i;
    float total = 0, num;

    // Operaciones
    printf("Ingrese la cantidad de números: ");
    scanf("%d", &count);

    printf("Ingrese %d números:\n", count);
    for (i = 0; i < count; i++) {
        scanf("%f", &num);
        total += num;
    }
    // Proceso
    float average = total / count;
    // Salida 
    printf("El promedio de los números ingresados es: %.2f\n", average);

    return 0;
}
